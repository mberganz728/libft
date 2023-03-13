/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:49:00 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/10 17:32:14 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *sorc, size_t n)
{
	char			*dst;
	char			*src;
	unsigned int	i;

	dst = (char *) dest;
	src = (char *) sorc;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
/*#include <stdio.h>
int	main(void)
{
	char dst [] = "tortilla";
	char src [] = "patata";
	size_t n = 5;
	printf("%s", ft_memcpy(dst, src, n));
	return (0);
}*/
