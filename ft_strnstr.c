/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:28:08 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/13 10:59:08 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < n)
	{
		while (haystack[i] == needle[j] && i < n)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + (i - j)));
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char a[] = "lorem ipsum dolor sit amet";
	char b[] = "ipsumm";
	size_t n = 30;
	printf("%s\n%s", ft_strnstr(a, b, n), strnstr(a, b, n));
	return (0);
}*/
