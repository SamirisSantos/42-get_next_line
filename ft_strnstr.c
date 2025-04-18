/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:10:23 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/15 16:42:47 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (little[i] == '\0')
    {
        return ((char *)&big[i]);
    }
    while ((big[i] != '\0') && (i < len - 1))
    {
        while (little[j] != '\0' && little[j] == big[i + j])
        {
            j++;
        }
        if (little[j] == '\0')
        {
            return ((char *)&big[i]);
        }
        i++;
    }
    return (0);
}
int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 4);
    printf("Retorn: %s \n",ptr);

}