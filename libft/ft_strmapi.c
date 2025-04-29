/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:38:11 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/29 14:44:09 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// char	ft_upfirst(unsigned int i, char c)
// {
// 	if(i == 0 && c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else if (i != 0 && c >= 'A' && c <= 'Z')
// 			return (c + 32);
// 		else
// 		{
// 			if(c >= 'a' && c <= 'z')
// 			return (c - 32);
// 		}
// 	return (c);
// }
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!res || !s || !f)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
// int main()
// {
// 	char *s = "pORTO 42!";
// 	char *result = ft_strmapi(s, ft_upfirst);
// 	printf("Result: %s\n", result);
// 	free(result); 
// 	return 0;
// }