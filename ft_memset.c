/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:17:58 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/10 12:27:02 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned char	b;

	i = 0;
	str = (unsigned char *) s;
	b = (unsigned char) c;
	while (i < n)
	{
		str[i] = b;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned char str[] = "rellena esta zona de memoria";
	int c = 54;
	size_t n = 5;
	printf("%s", ft_memset(str, c, n));
	printf("%s", memset(str, c, n));
	return (0);
}*/
