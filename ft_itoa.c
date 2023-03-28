/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberganz <mberganz@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:56:24 by mberganz          #+#    #+#             */
/*   Updated: 2023/03/27 13:42:02 by mberganz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = i + 1;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*cut_itoa(int n, unsigned int nlen, char *mit)
{
	if (n < 0)
	{
		n = -n;
		mit[0] = '-';
	}
	mit[nlen] = '\0';
	if (n == 0)
		mit[0] = 48;
	while (n > 0)
	{
		mit[nlen - 1] = n % 10 + 48;
		n = n / 10;
		nlen--;
	}
	return (mit);
}

char	*ft_itoa(int n)
{
	char			*mit;
	unsigned int	nlen;	

	nlen = ft_intlen(n);
	if (n == -2147483648)
	{
		mit = ft_itoa(-2147483647);
		mit[nlen - 1] += 1;
		return (mit);
	}
	mit = (char *)malloc((nlen + 1) * (sizeof(char)));
	if (!mit)
		return (0);
	return (cut_itoa(n, nlen, mit));
}
/*#include <stdio.h>
int	main()
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}*/
