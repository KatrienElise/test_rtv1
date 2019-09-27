/* ************************************************************************** */
/*                                                                            */
/*                                                             ::::::::       */
/*   ft_min.c                                                :+:    :+:       */
/*                                                          +:+               */
/*   By: nmartins <nmartins@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2019/04/18 17:46:19 by nmartins            #+#    #+#           */
/*   Updated: 2019/04/18 17:48:07 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
