/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:34:16 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/27 16:53:54 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_upfirst(unsigned int i, char *c)
// {// Function teste, convert first letter to uppercase and the rest to lowercase
//     if (i == 0 && *c >= 'a' && *c <= 'z')
//         *c = *c - 32;
//     else if (i != 0 && *c >= 'A' && *c <= 'Z')
//     {
//         *c = *c + 32; 
// 	}
// }

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int	i;

	if(!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
// int main()
// {
//     char s[] = "pORTO 42!";
//     printf("Antes: %s\n", s);
//     ft_striteri(s, ft_upfirst);
//     printf("Depois: %s\n", s);
//     return 0;
// }
