/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:02:57 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/24 14:36:43 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = s;
	while (i < n)
	{
		src[i] = 0;
		i++;
	}
}
/*int main()
{
    char test[10] = "123456789";
    //bzero(test, 5);
    ft_bzero(test, 5);
    int i = 0;

    while (i < 10)
    {
        printf("Resultado: %d \n", test[i]);
        i++;
    }
}*/