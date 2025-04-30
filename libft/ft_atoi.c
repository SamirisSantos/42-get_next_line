/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 13:21:40 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/30 13:40:39 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	number = 0;
	while (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n'
		|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = (number * 10) + (nptr[i++] - '0');
	}
	return (number * sign);
}
// int main()
// {
// 	int ConvertedStr  = ft_atoi("  ---+--+1234ab567");
// 	printf("Converted to Integer: %d\n", ConvertedStr);
//     ConvertedStr = ft_atoi("-2147483648");
//     printf("Converted to Integer: %d\n", ConvertedStr);
// 	ConvertedStr = ft_atoi("2147483647");
//     printf("Converted to Integer: %d\n", ConvertedStr);
//     return 0;
// }