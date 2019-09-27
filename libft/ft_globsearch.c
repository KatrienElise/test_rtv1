/* ************************************************************************** */
/*                                                                            */
/*                                                             ::::::::       */
/*   ft_globsearch.c                                         :+:    :+:       */
/*                                                          +:+               */
/*   By: nmartins <nmartins@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2019/04/21 17:42:57 by nmartins            #+#    #+#           */
/*   Updated: 2019/04/21 17:42:58 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_globsearch(const char *orig, const char *pat)
{
	while (*orig)
	{
		if (ft_globmatch(orig, pat))
			return ((char*)orig);
		orig++;
	}
	return (NULL);
}
