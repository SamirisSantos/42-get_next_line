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

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dst = 0;
	len_src = 0;
	while (dst[len_dst] != '\0')
	{
		len_dst++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}
	while ((src[i] != '\0') && ((len_dst + i + 1) < size))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*int main()
{
	char dest[] = "Hello ";
	char src[] = "42Course";
	size_t r;

	r = ft_strlcat(dest, src, 0);
	printf("string resultado: %s \n", dest);
	printf("returno strlcat: %zu \n", r);
}*/