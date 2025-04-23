/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:44:33 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/23 17:45:21 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*res;

	i = 0;
	j = 0;
	k = 0;
	if (set[i] == '\0')
	{
		return ((char *)&s1[i]);
	}
	while (s1[i] != '\0')
	{
		while (set[j] != '\0' && set[j] == s1[i + j])
		{
			j++;
		}
		printf(" %c \n",res[k]);
		if(set[j] == '\0')
		{
			return ((char *)&s1[i]);
		}
		i++;
	}
	return (0);
}
int main()
{
    const char *s1 = "Foo Bar Baz";
    const char *s2 = "Bar";
    char *ptr;

    ptr = ft_strtrim(s1 , s2);
    printf("Retorn: %s \n",ptr);

}