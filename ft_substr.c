/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:33:53 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/13 16:15:55 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (ft_strdup(""));
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
/*#include <stdio.h>
int	main()
{
	char a[] = "";
	unsigned int start = 5;
	size_t len = 0;
	printf("%s\n", ft_substr(a, start, len));
	return (0);
}*/
