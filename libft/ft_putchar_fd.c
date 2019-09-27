/* ************************************************************************** */
/*                                                                            */
/*                                                              ::::::::      */
/*   ft_putchar_fd.c                                          :+:    :+:      */
/*                                                           +:+              */
/*   By: nmartins <nmartins@student.codam.nl>               +#+               */
/*                                                         +#+                */
/*   Created: 2019/03/25 16:55:55 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/25 16:55:55 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, (void*)&c, sizeof(c));
}
