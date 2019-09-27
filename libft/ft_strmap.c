/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 20:41:08 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/21 20:53:48 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	char	*new;
	size_t	i;

	i = 0;
	new = ft_strdup((char*)s);
	if (!new)
		return (0);
	while (new[i])
	{
		new[i] = f(new[i]);
		i++;
	}
	return (new);
}
