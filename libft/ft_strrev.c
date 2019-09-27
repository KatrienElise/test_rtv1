/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 14:40:21 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/22 15:40:51 by nmartins      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** O(n)
** In-place string reversal, returns str
*/

char	*ft_strrev(char *str)
{
	int		begin;
	int		end;
	char	tmp;

	begin = 0;
	end = ft_strlen(str) - 1;
	while (begin < end)
	{
		tmp = str[begin];
		str[begin] = str[end];
		str[end] = tmp;
		begin++;
		end--;
	}
	return (str);
}
