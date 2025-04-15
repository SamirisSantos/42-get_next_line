/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:04:43 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/14 15:04:48 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (16384);
	}
	else
		return (0);
}
/*
int main()
{
	char c;
	c = '\n';

	int result = ft_isprint(c);
	printf("Result minha: %d \n", result);

	printf("Result: %d \n", isprint(c));
	
	

    return 0;
}*/
