/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/26 15:29:41 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/23 19:59:34 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				count;
	const unsigned char	*s;

	if (n == 0)
		return (0);
	s = (unsigned char*)str;
	count = 0;
	while (count < (n - 1) && s[count] != (unsigned char)c)
		count++;
	if (s[count] != (unsigned char)c)
		return (0);
	return (void*)(str + count);
}
