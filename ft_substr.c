/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:33:53 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/14 12:00:35 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((int)len < 0)
		len = ft_strlen(s);
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
	char a[] = "hola";
	unsigned int start = 0;
	size_t len = -1;
	printf("%s\n", ft_substr(a, start, len));
	return (0);
}*/
