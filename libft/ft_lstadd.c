/* ************************************************************************** */
/*                                                                            */
/*                                                              ::::::::      */
/*   ft_lstadd.c                                              :+:    :+:      */
/*                                                           +:+              */
/*   By: nmartins <nmartins@student.codam.nl>               +#+               */
/*                                                         +#+                */
/*   Created: 2019/03/25 13:12:56 by nmartins            #+#    #+#           */
/*   Updated: 2019/03/25 13:13:04 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
