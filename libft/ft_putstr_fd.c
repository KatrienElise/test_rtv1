/* ************************************************************************** */
/*                                                                            */
/*                                                              ::::::::      */
/*   ft_putstr_fd.c                                           :+:    :+:      */
/*                                                           +:+              */
/*   By: nmartins <nmartins@student.codam.nl>               +#+               */
/*                                                         +#+                */
/*   Created: 2019/03/25 13:10:50 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/25 16:53:41 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, (void*)s, ft_strlen(s));
}
