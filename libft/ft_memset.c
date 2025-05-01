/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:45:23 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 15:01:43 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = (unsigned char )c;
		i++;
	}
	return (str);
}
// int main()
// {
//     char dest[50];
//     char ch = 'b';
//     ft_memset(dest, ch, 20);
//     printf("After ft_memset():  %s \n", dest);
//     memset(dest, ch, 20);
//     printf("After memset():  %s \n", dest);
// }