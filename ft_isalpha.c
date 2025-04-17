/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:49:12 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 15:01:34 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	else
		return (0);
}
/*
int main()
{
	char c;
	c = 'a';
	int result = ft_isalpha(c);
	printf("Result: %d \n", result);

	printf("Result: %d \n", isalpha(c));	
	

    return 0;
}*/
