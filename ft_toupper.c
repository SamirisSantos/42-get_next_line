/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:09:25 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 13:09:33 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
		return (c);

}

int	main()
{
	char c;
	c = 's';
	
	printf("Minha: %c \n", ft_toupper(c));
	printf("FUncao C: %c \n", toupper(c));
}

