/* ************************************************************************** */
/*                                                                            */
/*                                                              ::::::::      */
/*   ft_atoi.c                                                :+:    :+:      */
/*                                                           +:+              */
/*   By: nmartins <nmartins@student.codam.nl>               +#+               */
/*                                                         +#+                */
/*   Created: 2019/03/25 12:39:18 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/25 16:51:30 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int		ft_atoi(const char *str)
{
	long long	result;
	int			mag;

	result = 0;
	mag = 1;
	while (ft_iswhite(*str) || *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		mag = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (mag * result);
}
