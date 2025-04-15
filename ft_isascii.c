/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:40:03 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 15:01:36 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

/*int	ft_isascii(int c)
{
	
}*/

int main()
{
	char c;
	c = '2';

	printf("Result: %d \n", isascii(c));
	
	

    return 0;
}
