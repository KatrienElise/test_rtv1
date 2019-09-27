/* ************************************************************************** */
/*                                                                            */
/*                                                              ::::::::      */
/*   ft_itoa.c                                               :+:    :+:       */
/*                                                           +:+              */
/*   By: nmartins <nmartins@student.codam.nl>               +#+               */
/*                                                         +#+                */
/*   Created: 2019/03/25 16:57:48 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/26 16:54:42 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static int	number_size(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n / 10)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	handle_negative(char **out, int *i, long *long_n)
{
	(*out)[*i] = '-';
	(*i)++;
	(*long_n) = -(*long_n);
}

char		*ft_itoa(int n)
{
	long	long_n;
	char	*out;
	int		size;
	int		i;

	if (!n)
		return (ft_strdup("0"));
	long_n = n;
	size = number_size(long_n);
	out = ft_strnew(size);
	if (!out)
		return (0);
	i = 0;
	if (long_n < 0)
		handle_negative(&out, &i, &long_n);
	while (long_n > 0)
	{
		out[i] = '0' + long_n % 10;
		i++;
		long_n /= 10;
	}
	ft_strrev(out[0] == '-' ? out + 1 : out);
	return (out);
}
