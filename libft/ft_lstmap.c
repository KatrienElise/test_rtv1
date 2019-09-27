/* ************************************************************************** */
/*                                                                            */
/*                                                             ::::::::       */
/*   ft_lstmap.c                                             :+:    :+:       */
/*                                                          +:+               */
/*   By: nmartins <nmartins@student.codam.nl>              +#+                */
/*                                                        +#+                 */
/*   Created: 2019/03/26 18:01:25 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/26 18:01:27 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	new = f(lst);
	if (lst->next)
		new->next = ft_lstmap(lst->next, f);
	return (new);
}
