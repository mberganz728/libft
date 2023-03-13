/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 10:42:03 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/10 12:40:33 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	at;
	int	sign;

	i = 0;
	at = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		at = at * 10 + (str[i] - 48);
		i++;
	}
	return (at * sign);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main()
{
	char s[] = "		-1949s567";
	printf("%d\n", ft_atoi(s));
	printf("%d", atoi(s));
	return (0);
}*/
