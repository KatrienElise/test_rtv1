/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                             :+:    :+:       */
/*                                                     +:+                    */
/*   By: nmartins <nmartins@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/26 17:59:01 by nmartins      #+#    #+#                 */
/*   Updated: 2019/03/26 18:01:58 by nmartins            ########   odam.nl   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_list;

	new_list = (t_list*)malloc(sizeof(t_list));
	if (!new_list)
		return (0);
	if (!content)
	{
		new_list->content = NULL;
		new_list->content_size = 0;
	}
	else
	{
		new_list->content = malloc(content_size);
		if (!new_list->content)
		{
			free(new_list);
			return (0);
		}
		ft_memcpy(new_list->content, content, content_size);
		new_list->content_size = content_size;
	}
	new_list->next = 0;
	return (new_list);
}
