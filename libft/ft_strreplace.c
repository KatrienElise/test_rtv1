/* ************************************************************************** */
/*                                                                            */
/*                                                             ::::::::       */
/*   ft_strreplace.c                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: nmartins <nmartins@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2019/04/01 19:30:54 by nmartins            #+#    #+#           */
/*   Updated: 2019/04/01 19:32:07 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_strreplace(char **old, char *new)
{
	free(*old);
	*old = new;
}
