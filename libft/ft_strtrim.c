/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 12:25:57 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/22 12:26:00 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;
	char	*out;

	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_iswhite(s[start]))
		start++;
	while (ft_iswhite(s[end]))
		end--;
	end++;
	if (end < start)
		return (ft_strnew(0));
	out = ft_strnew(end - start);
	if (!out)
		return (0);
	ft_memcpy(out, &s[start], end - start);
	out[end - start] = '\0';
	return (out);
}
