/* ************************************************************************** */
/*                                                                            */
/*                                                             ::::::::       */
/*   ft_max.c                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: nmartins <nmartins@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2019/04/18 17:45:55 by nmartins            #+#    #+#           */
/*   Updated: 2019/04/18 17:46:15 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
