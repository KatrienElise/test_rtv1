/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 12:25:14 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/22 12:25:47 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *new;

	new = ft_strnew(len);
	if (!new)
		return (0);
	ft_memcpy(new, &s[start], len);
	return (new);
}
