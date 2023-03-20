/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:22:19 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/16 13:17:27 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	*fvoid(unsigned int i, char *s)
{
	char	*str;
	
	i = 0;
	s = "patata";
	
}

#include <stdio.h>
int	main()
{
	char	a[] = "patata";
	printf("%s", ft_striteri(a, fvoid));
	return (0);
}*/
