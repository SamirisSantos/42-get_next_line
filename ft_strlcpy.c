/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:52:48 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 15:20:00 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	j;

	len = 0;
	j = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size == 0)
	{
		return (len);
	}
	while ((src[j] != '\0') && (j < size - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (len);
}
/*int main()
{
	char src[] = "Hello word";
	char dest[5];
	size_t ret;

	ret = strlcpy(dest, src, sizeof(dest));
	printf("Result C: %s \n", dest);
	printf("Result C: %zu \n", ret);

	ret = ft_strlcpy(dest, src, sizeof(dest));
	printf("Result: %s \n", dest);
	printf("Result: %zu \n", ret);
}*/