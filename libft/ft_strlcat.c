/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 14:55:10 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/23 20:10:12 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	len;
	int		found_null;

	if (size == 0)
		return (ft_strlen(src));
	len = ft_strlen(dst);
	j = 0;
	found_null = dst[len > size ? size : len] != 0;
	while (len + j < size - 1 && src[j])
	{
		dst[len + j] = src[j];
		j++;
	}
	dst[len + j] = 0;
	if (found_null)
		return (ft_strlen(src) + size);
	else
		return (len + ft_strlen(src));
}
