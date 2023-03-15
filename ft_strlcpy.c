/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:43:42 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/14 14:48:10 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (size != '\0')
	{
		while (src[i] != 0 && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}
/*
#include <stdio.h>
int	main(void)
{
	char	a[] = "tortillaca";
	char	b[] = "patata";
	unsigned int c = 9;
	printf("Chars copiados: %d\n", ft_strlcpy(a, b, c));
	printf("Cadena: %s\n", a);
	return (0);
}*/
