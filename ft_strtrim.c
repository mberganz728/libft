/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:03:38 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/13 10:49:57 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (s1 == '\0' && set == '\0')
		return (0);
	while (s1[start] != 0 && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trimmed = (char *)malloc((end - start + 1) * (sizeof (char)));
	if (!trimmed)
		return (0);
	ft_memcpy(trimmed, s1 + start, end - start + 1);
	trimmed[end - start + 1] = '\0';
	return (trimmed);
}
/*#include <stdio.h>
int	main()
{
	char	s1[] = "tortilla";
	char	set[] = "tl";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}*/
