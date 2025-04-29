/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:44:33 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/24 14:46:47 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*strstrimed;

	start = 0;
	end = ft_strlen((char *)s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	strstrimed = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!strstrimed)
		return (NULL);
	ft_strlcpy(strstrimed, s1 + start, end - start + 1);
	return (strstrimed);
}
// int main()
// {
//     const char *s1 = "--42 Porto--";
//     const char *s2 = "-";
//     char *ptr;
//     ptr = ft_strtrim(s1 , s2);
//     printf("Retorn: %s \n",ptr);
// }