/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:15:57 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 15:01:39 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (2048);
	}
	else
		return (0);
}
/*
int main()
{
	char c;
	c = '2';
	int result = ft_isdigit(c);
	printf("Result: %d \n", result);

	printf("Result: %d \n", isdigit(c));	
	

    return 0;
}*/
