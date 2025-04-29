/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:08:59 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 15:49:16 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen((char *)src);
	if (size == 0)
		return (len_src);
	if (len_dst >= size)
		return (size + len_src);
	while ((src[i] != '\0') && ((len_dst + i + 1) < size))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
// int main()
// {
// 	char dest[15] = "a";
// 	char src[] = "lorem ipsum dolor sit amet";
// 	size_t r;
// 	ft_memset(dest, 'r', 15);
// 	r = ft_strlcat(dest, src, 5);
// 	printf("string resultado: %s \n", dest);
// 	printf("returno strlcat: %zu \n", r);
// }