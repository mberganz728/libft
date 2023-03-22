/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:47:43 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/22 16:27:54 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;

	while (lst != NULL)
	{
		newlist = ft_lstnew(f(lst->content));
		if (!newlist)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		newlist = newlist->next;
		lst = lst->next;
	}
	return (newlist);
}
