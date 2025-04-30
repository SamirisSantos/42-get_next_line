/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:06:50 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/22 16:31:16 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		i;
	char	*cpy;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	cpy = (char *)malloc((i + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	cpy[i] = '\0';
	while (i >= 0)
	{
		cpy[i] = s[i];
		i--;
	}
	return (cpy);
}
// int main()
// {
//     const char *str = "42 Porto";
//     char *res;
//     res = ft_strdup(str);                            
//     printf("Resultado: %s\n", res);
//     free(res);
//     return(0);
// }