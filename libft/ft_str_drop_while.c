/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_drop_while.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 12:19:59 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/21 19:39:13 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_drop_while(const char *source, int (*f)(int))
{
	size_t	i;

	if (!source)
		return (0);
	i = 0;
	while (source[i] && f(source[i]))
		i++;
	return (ft_strdup((char*)&source[i]));
}
