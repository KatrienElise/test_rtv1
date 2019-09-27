/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtolo.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 18:47:58 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/21 19:10:13 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_make_lower(char *c)
{
	*c = ft_tolower(*c);
}

char		*ft_strtolo(char *str)
{
	char *new;

	new = ft_strdup(str);
	ft_striter(new, ft_make_lower);
	return (new);
}
