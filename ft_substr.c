/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:33:53 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/20 17:39:16 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((int)len < 0 || (int)len > (int)ft_strlen(s) + (int)start)
		sub = (char *)malloc(ft_strlen(s) + 1 * (sizeof(char)));
	else
		sub = (char *)malloc((len + 1) * (sizeof(char)));
	if (!sub)
		return (0);
	while (s[i])
	{
		if (j < len && i >= start)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = '\0';
	return (sub);
}
/*#include <stdio.h>
int	main()
{
	char a[] = "tripouille";
	unsigned int start = 0;
	size_t len = 42000;
 	char *str = ft_substr(a, start, len);
	printf("%s\n", str);
	free(str);
	system("leaks -q a.out");
	return (0);
}*/
