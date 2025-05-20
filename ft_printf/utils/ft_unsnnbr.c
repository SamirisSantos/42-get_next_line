/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsnnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:46:31 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/20 16:05:55 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
# include <unistd.h>

static int	countnumber(unsigned long int i)
{
	int	count;

	count = 0;
	if (i == 0)
		return (1);
	while (i > 0)
	{
		i = i / 10;
		count++;
		//printf("%u\n", i);
	}
	printf("%u\n", count);
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
	j = strlen(c) - 1;
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

char	*ft_itoa(long int n)
{
	char	*s;
	int		i;
	unsigned long int	num;

	num = (unsigned long int)n;
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
int main()
{
	char	*converted_int;
	converted_int = ft_itoa(4294967295);
	printf("My funcion: %s\n", converted_int);
	free(converted_int);
	unsigned long int n = -4294967295;
	printf("Original printf %u\n", n);
}