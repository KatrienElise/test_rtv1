/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                             :+:    :+:       */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/02/26 15:29:41 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/26 14:27:29 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*out;

	len = ft_strlen(str);
	out = (char*)malloc(sizeof(char) * (len + 1));
	if (!out)
		return (0);
	ft_memcpy(out, str, len + 1);
	return (out);
}
