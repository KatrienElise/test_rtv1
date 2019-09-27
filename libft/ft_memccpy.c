/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/26 15:29:41 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/23 19:34:39 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (n == 0)
		return (NULL);
	s = src;
	d = dest;
	i = 0;
	while (i < n - 1 && s[i] != (unsigned char)c)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = s[i];
	if (d[i] == (unsigned char)c)
		return (dest + i + 1);
	else
		return (0);
}
