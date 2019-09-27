/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memrcpy.c                                            :+:    :+:       */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/23 21:11:16 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/23 21:15:16 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Like ft_memcpy, but reverse
*/

void	*ft_memrcpy(void *dest, const void *src, size_t n)
{
	size_t		counter;
	const char	*s;
	char		*d;

	s = src;
	d = dest;
	counter = 0;
	while (counter < n)
	{
		d[n - counter - 1] = s[n - counter - 1];
		counter++;
	}
	return (dest);
}
