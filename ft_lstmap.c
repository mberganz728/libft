/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:47:43 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/23 17:14:44 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*temp;

	if (!lst)
		return (NULL);
	newlist = ft_lstnew(f(lst->content));
	if (!newlist)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, temp);
	}
	return (newlist);
}
/*
#include <stdio.h>
#include <stdlib.h>
void	*f(void *ptr)
{
	ptr = (char *)ptr;
	printf("%s", (char *)ptr);
	return (ptr);
}
void	del(void *ptr)
{
	free(ptr);
}

int	main()
{
	t_list	*list;
	t_list	*new_list;

	list = ft_lstnew("Hola");
	ft_lstadd_back(&list, ft_lstnew("tortilla"));
	ft_lstadd_back(&list, ft_lstnew("de"));
	ft_lstadd_back(&list, ft_lstnew("patata"));
	new_list = ft_lstmap(list, f, del);
	if (!new_list)
	{
		printf("Failed to create new list\n");
		return (1);
	}
	printf("New list:\n");
	ft_lstclear(&list, del);
	ft_lstclear(&new_list, del);
	return (0);
}*/