/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:41:03 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/30 16:28:20 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !substr)
		return (NULL);
	if (start >= strlen(s))
	{
		substr[0] = '\0';
		return (substr);
	}
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
// int main()
// {
// 	//char *str = "42 Porto e top";
// 	char *ptr;
// 	ptr = ft_substr("tripouille", 0, 42000);
// 	printf("%s \n",ptr);
// 	free(ptr);
// 	return (0);
// }