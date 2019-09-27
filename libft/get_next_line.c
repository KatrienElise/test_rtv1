/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                         :+:    :+:       */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/28 15:21:24 by nmartins       #+#    #+#                */
/*   Updated: 2019/06/09 15:19:36 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

static int	ft_read_line(const int fd, char **write_to)
{
	char	*buf;
	ssize_t	bytes_read;

	if (!*write_to)
		*write_to = ft_strnew(0);
	buf = ft_strnew(BUFF_SIZE);
	if (!buf)
		return (-1);
	bytes_read = 1;
	while (bytes_read > 0 && ft_strchr(*write_to, '\n') == NULL)
	{
		bytes_read = read(fd, buf, BUFF_SIZE);
		if (bytes_read < 0)
		{
			ft_strdel(&buf);
			return (-1);
		}
		ft_strreplace(write_to, ft_strjoin(*write_to, buf));
		ft_bzero(buf, BUFF_SIZE);
	}
	ft_strdel(&buf);
	return (0);
}

static int	get_next_line_c(const int fd, char **line, char **target)
{
	size_t		len;

	if (ft_read_line(fd, target) == -1)
		return (-1);
	len = 0;
	while ((*target)[len] && (*target)[len] != '\n')
		len++;
	if ((*target)[len] != '\n')
	{
		*line = len == 0 ? NULL : ft_strdup(*target);
		ft_strdel(target);
		return (len != 0);
	}
	*line = ft_strsub(*target, 0, len);
	if (!*line)
		return (-1);
	ft_strreplace(target, ft_strdup(&(*target)[len + 1]));
	return (1);
}

int			ft_get_next_line(const int fd, char **line)
{
	static char	*cache[12000];
	char		**target;
	char		*s;

	s = NULL;
	if (read(fd, s, 0) < 0 || !line)
		return (-1);
	target = &cache[fd];
	return (get_next_line_c(fd, line, target));
}
