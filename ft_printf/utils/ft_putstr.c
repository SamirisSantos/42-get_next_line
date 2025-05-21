/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 12:46:07 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/20 14:53:51 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//%s Prints a string 
int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}
/*int main()
{
	char *s = "Hello 42 Porto!";
	int	Original;
	int	myfuntion;

	Original = printf("%s", s);
	printf("\n");
	myfuntion = ft_putstr(s);
	printf("\nReturn values - Original: %d", Original);
	printf(", Myfuntion: %d\n", myfuntion);

	return (0);
}*/