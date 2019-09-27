/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 18:08:03 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/23 19:37:00 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *is;
	char *js;
	char *lookback;

	is = (char*)haystack;
	if (!*is && !*needle)
		return (is);
	if (!*is)
		return (NULL);
	if (!*needle)
		return (is);
	while (*is)
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
	}
	return (0);
}
