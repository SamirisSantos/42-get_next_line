/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:41:03 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/01 13:12:53 by sade-ara         ###   ########.fr       */
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
/* 
Error in test 5: ft_substr("hola", 0, 18446744073709551615): not enough memory allocated, needed: 5, 
reserved: 0
Error in test 5: ft_substr("hola", 0, 18446744073709551615): 
Memory leak: 0x56390a6d08b0 - 4096 bytes
You failed to free the memory allocated at:
Error in test 6: ft_substr("hola", 4294967295, 18446744073709551615): not enough memory allocated, 
needed: 1, reserved: 0

*/