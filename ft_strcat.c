/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:08:59 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 13:09:09 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *str1, const char *str2)
{
	int	i;
	int	j;

	while (str1[i] != '\0')
	{
		i++;
	}
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
/*
int main()
{
	char dest[50] = "Hello ";
	char src[] = "42Course";

	ft_strcat(dest, src);
	printf("%s\n", dest);
}*/
