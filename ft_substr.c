/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:33:53 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/27 17:51:04 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*mysf(char const *s, char *sub, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (((unsigned int)ft_strlen(s) + start) < (unsigned int)len)
		len = ft_strlen(s) + start;
	if (start >= (unsigned int)ft_strlen(s))
		sub = (char *)malloc(sizeof(char));
	else if ((unsigned int)ft_strlen(s) > start + (unsigned int)len)
		sub = (char *)malloc((len + 1) * (sizeof(char)));
	else
		sub = (char *)malloc((ft_strlen(s) - start + 1) * (sizeof(char)));
	if (!sub)
		return (0);
	return (mysf(s, sub, start, len));
}
/*#include <stdio.h>
int	main()
{
	char a[] = "hola";
	unsigned int start = 4;
	size_t len = 1;
 	char *str = ft_substr(a, start, len);
	printf("%s\n", str);
	free(str);
	system("leaks -q a.out");
	return (0);
}*/
