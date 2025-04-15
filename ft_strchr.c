/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:53:21 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 16:52:48 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		else
			i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}
/*int main()
{
    char myStr[] = "Hello World outra coisa";
    char *myPtr = ft_strchr(myStr, 'd');
    
    printf("%s", myPtr);

}*/
