/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:24:08 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/14 12:46:31 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (char *)malloc(num * size);
	i = 0;
	if (!ptr)
		return (0);
	while (i < (num * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
