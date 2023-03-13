/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:38:26 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/10 18:00:35 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	if (s == 0)
		return (0);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	const char a[] = "";
	int c = '0';
	printf("%s\n%s", ft_strrchr(a, c), strrchr(a, c));
	return (0);
}*/
