/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:41:16 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/20 15:23:44 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//%c Prints a single character
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
// int main()
// { 
// 	ft_putchar('A');
// 	return (0);
// }