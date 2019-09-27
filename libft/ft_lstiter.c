/* ************************************************************************** */
/*                                                                            */
/*                                                              ::::::::      */
/*   ft_lstiter.c                                             :+:    :+:      */
/*                                                           +:+              */
/*   By: nmartins <nmartins@student.codam.nl>               +#+               */
/*                                                         +#+                */
/*   Created: 2019/03/25 13:13:23 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/25 13:49:04 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	f(lst);
	if (lst->next)
	{
		ft_lstiter(lst->next, f);
	}
}
