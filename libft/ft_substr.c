/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:41:03 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/01 12:23:01 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!s || !substr)
		return (NULL);
	if (start >= ft_strlen(s))
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
/*void test(char *s, unsigned int start, size_t len)
{
	char *res;
	res = ft_substr(s, start, len);
	printf("test:%s \n", res);
	free(res);
}
int main()
{
	test("Hello word", 6, 5);
	test("Hello", 10, 3);
	test("Hello", 2, 10);
	test("Hello", 2, 0);
	test("Hello", 5, 1);
	test("Hello", 0, 5);
	test("", 0, 5);
	test(NULL, 0, 5);
	return (0);
}*/