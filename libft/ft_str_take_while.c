/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_take_while.c                                     :+:    :+:       */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 12:20:04 by nmartins      #+#    #+#                 */
/*   Updated: 2019/04/01 19:34:03 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_str_take_while(const char *source, int (*f)(int))
{
	size_t	i;
	char	*out;

	i = 0;
	while (source[i] && f(source[i]))
		i++;
	out = ft_strnew(i);
	ft_memcpy(out, source, i);
	return (out);
}
