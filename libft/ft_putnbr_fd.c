/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                          :+:    :+:       */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 18:58:42 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/26 17:53:21 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_c(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd_c(-(n / 10), fd);
		ft_putchar_fd('0' + -(n % 10), fd);
	}
	else if (n / 10)
		ft_putnbr_fd_c(n / 10, fd);
	if (n > 0)
		ft_putchar_fd('0' + (n % 10), fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
	}
	else
	{
		ft_putnbr_fd_c(n, fd);
	}
}
