/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_realloc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/23 19:45:27 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/23 19:45:33 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void			*ft_realloc(
					void *mem,
					size_t s_len,
					size_t n_len)
{
	void *out;

	if (!n_len)
		return (0);
	out = malloc(n_len);
	if (!out)
		return (0);
	ft_memcpy(out, mem, s_len > n_len ? n_len : s_len);
	free(mem);
	return (out);
}
