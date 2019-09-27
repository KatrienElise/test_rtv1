/* ************************************************************************** */
/*                                                                            */
/*                                                              ::::::::      */
/*   ft_lstdelone.c                                           :+:    :+:      */
/*                                                           +:+              */
/*   By: nmartins <nmartins@student.codam.nl>               +#+               */
/*                                                         +#+                */
/*   Created: 2019/03/25 13:13:14 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/25 13:13:15 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	*alst = 0;
}
