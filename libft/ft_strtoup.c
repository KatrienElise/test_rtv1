/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtoup.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/21 18:42:55 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/21 19:10:27 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_make_upper(char *c)
{
	*c = ft_toupper(*c);
}

char		*ft_strtoup(char *str)
{
	char *new;

	new = ft_strdup(str);
	ft_striter(new, ft_make_upper);
	return (new);
}
