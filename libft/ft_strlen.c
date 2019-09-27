/* ************************************************************************** */
/*                                                                            */
/*                                                             ::::::::       */
/*   ft_strlen.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: nmartins <nmartins@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2019/03/26 18:55:47 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/26 18:55:58 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char *st;

	st = (char*)s;
	while (*s)
		++s;
	return (s - st);
}
