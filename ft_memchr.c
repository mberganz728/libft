/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:54:22 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/11 14:09:50 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;	
	size_t			i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char) c)
			return (str + i);
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	const char	s[] = "patata";
	int	c = 't';
	printf("%s\n%s", ft_memchr(s, c, 4), memchr(s, c, 4));
	return (0);
}*/
