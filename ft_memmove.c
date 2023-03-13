/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:20 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/10 12:27:59 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *sorc, size_t n)
{
	char			*dst;
	char			*src;
	unsigned int	i;

	dst = (char *) dest;
	src = (char *) sorc;
	i = 0;
	if (dst <= src)
	{
		ft_memcpy(dst, src, n);
	}
	else
	{
		while (n > 0)
		{
			dst[n - 1] = src [n - 1];
			n--;
		}
	}
	return (dst);
}
/*#include <stdio.h>
int	main(void)
{
	char dst [] = "tortillaaa";
	char src [] = "patateeeeeee";
	size_t n = 11;
	printf("%s", ft_memmove(dst, src, n));
	return (0);
}*/
