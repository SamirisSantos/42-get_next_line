/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:16:34 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/16 09:16:34 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while ((d < s) && (i < n))
	{
		d[i] = s[i];
		i++;
	}
	while ((d > s) && (n > 0))
	{
		n--;
		d[n] = s[n];
	}
	return (dest);
}
/*int main()
{
    char src[20] = "Hello World!";
    char dest[20] = "Goodbye!";

    printf("Before ft_memmove: %s\n", dest);
    
    ft_memmove(dest, src, 8);
    
    printf("After ft_memmove: %s\n", dest);

    return 0;
}*/
