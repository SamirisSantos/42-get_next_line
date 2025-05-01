/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:59:03 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/01 14:18:46 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countnumber(long i)
{
	int	count;

	count = 0;
	if (i == 0)
		return (1);
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

static char	*ft_swapstr(char *c)
{
	char	temp;
	size_t	i;
	size_t	j;

	i = 0;
	if (c[i] == '0' && c[1] == '\0')
		return (c);
	if (c[i] == '-')
		i++;
	j = ft_strlen(c) - 1;
	while (j > i)
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
	long	num;

	num = (long)n;
	s = (char *)malloc(sizeof(char) * (countnumber(n) + 1));
	if (!s)
		return (NULL);
	i = 0;
	if (num == 0)
		s[i++] = '0';
	if (num < 0)
	{
		s[i++] = '-';
		num = -num;
	}
	while (num > 0)
	{
		s[i++] = num % 10 + '0';
		num = num / 10;
	}
	s[i] = '\0';
	ft_swapstr(s);
	return (s);
}
// int main()
// {
// 	char	*converted_int;
// 	converted_int = ft_itoa(9);
// 	printf("int to string: %s\n", converted_int);
// 	free(converted_int);
// }