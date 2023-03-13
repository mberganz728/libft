/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 14:18:09 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/13 11:40:23 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == 0 && (char)c == 0)
		return ((char *)s + i);
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	const char s[] = "teste";
	int c = '1024';
	printf("%s\n%s", ft_strchr(s, c), strchr(s, c));
	return (0);
}*/
