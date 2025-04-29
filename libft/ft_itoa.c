/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:59:03 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/24 17:22:25 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countnumber(int i)
{
	int	count;

	count = 0;
	if (i < 0)
	{
		i = i * (-1);
		count++;
	}
	while (i > 0)
	{
		i = i / 10;
		count++;
	}
	return (count);
}

char	*ft_swapstr(char *c)
{
	char	temp;
	size_t	i;
	size_t	j;

	i = 0;
	if (c[i] == '-')
		i++;
	j = (strlen(c) - 1);
	while (j >= i)
	{
		temp = c[i];
		c[i] = c[j];
		c[j] = temp;
		i++;
		j--;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	s = (char *)malloc(sizeof(char *) * (countnumber(n) + 1));
	if (!s)
		return (NULL);
	i = 0;
	if (n == 0)
		s[i] = '0';
	if (n < 0)
	{
		s[i] = '-';
		n = n * (-1);
		i ++;
	}
	while (n > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i ++;
	}
	s[i] = '\0';
	ft_swapstr(s);
	return (s);
}
// int main()
// {
// 	int	n = -2025;
// 	char	*converted_int;
// 	converted_int = ft_itoa(n);
// 	printf("int to string: %s\n", converted_int);
// }