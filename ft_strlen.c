/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:54:34 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 15:01:49 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
	char src[] = "outro texto";
	
	//C function
	printf("Result C: %zu \n", strlen(src));

	//My function
	int result = ft_strlen(src);
	printf("Destination: %d \n", result);
}*/
