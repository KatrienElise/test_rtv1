/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 12:25:01 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/22 12:25:08 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	slen1;
	size_t	slen2;
	char	*out;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	out = (char*)ft_strnew(slen1 + slen2);
	if (!out)
		return (0);
	ft_memcpy(out, s1, slen1);
	ft_memcpy(&out[slen1], s2, slen2 + 1);
	return (out);
}
