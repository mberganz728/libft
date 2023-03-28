/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:03:38 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/27 13:37:43 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;

	start = 0;
	if (ft_strlen(s1) == 0)
		end = 0;
	else
		end = ft_strlen(s1) - 1;
	if (s1 == '\0' && set == '\0')
		return (0);
	while (s1[start] != 0 && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
/*#include <stdio.h>
int	main()
{
	char	s1[] = "xxxz  test with x and z and x .  zx  xx z";
	char	set[] = "z x";
	printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/
