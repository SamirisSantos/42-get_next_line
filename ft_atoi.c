/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:21:40 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/21 14:00:02 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *nptr)
{
    int i;
    int number;

    i = 0;
    number = 0;
    while (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
	{
		i++;
	}
    while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = (number * 10) + (nptr[i++] - '0');
	}
	return (number);
}
/*int main()
{
    char strToConvert[] = "21042025";

    int ConvertedStr = ft_atoi(strToConvert);
    printf("Converted to Integer: %d\n", ConvertedStr);

    return 0;
}*/