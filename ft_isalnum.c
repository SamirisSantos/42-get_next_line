/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:59:02 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 15:02:01 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		return (8);
	}
	else
		return (0);
}
/*
int main()
{
	char c;
	c = '2';
	int result = ft_isalnum(c);
	printf("Result minha: %d \n", result);

	printf("Result: %d \n", isalnum(c));
	
	c = 'n';
	result = ft_isalnum(c);
	printf("Result minha: %d \n", result);
	printf("Result: %d \n", isalnum(c));
	
	c = '$';
	result = ft_isalnum(c);
	printf("Result minha: %d \n", result);
	printf("Result: %d \n", isalnum(c));
	

    return 0;
}*/


