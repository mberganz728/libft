/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:22:57 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/22 17:21:59 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = (t_list *)malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
