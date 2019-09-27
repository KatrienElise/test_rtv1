/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 18:40:00 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/23 19:43:39 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	char	*is;
	char	*js;
	char	*lookback;
	size_t	i;
	size_t	n_len;

	n_len = ft_strlen(needle);
	is = (char*)haystack;
	i = 0;
	while (*is && i + n_len <= n)
	{
		lookback = is;
		js = (char*)needle;
		while (*is && *js && *is == *js)
		{
			is++;
			js++;
		}
		if (!*js)
			return (lookback);
		is = lookback + 1;
		i++;
	}
	return (0);
}
