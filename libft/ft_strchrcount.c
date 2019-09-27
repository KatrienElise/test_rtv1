/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchrcount.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 12:24:49 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/22 12:24:52 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strchrcount(const char *str, char search)
{
	size_t count;

	count = 0;
	while (*str)
	{
		count += (*str == search);
		str++;
	}
	return (count);
}
