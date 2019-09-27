/* ************************************************************************** */
/*                                                                            */
/*                                                              ::::::::      */
/*   ft_lstdel.c                                              :+:    :+:      */
/*                                                           +:+              */
/*   By: nmartins <nmartins@student.codam.nl>               +#+               */
/*                                                         +#+                */
/*   Created: 2019/03/25 13:16:43 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/25 13:34:40 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *lst;
	t_list *tmp;

	lst = *alst;
	while (lst)
	{
		del(lst->content, lst->content_size);
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	*alst = 0;
}
