/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:41:03 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/24 14:41:08 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(sizeof(char) * (len +1));
	i = 0;
	if (substr == NULL)
		return (0);
	if (start > ft_strlen((char *)s))
	{
		substr[i] = '\0';
		return (substr);
	}
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
// 	char *str = "42 Porto e top";
// 	char *ptr;
// 	ptr = ft_substr(str, 15, 0);
// 	printf("%s \n",ptr);
// }