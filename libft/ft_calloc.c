/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:07:27 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/04 13:58:04 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*ptr;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = (char *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
/*int	main()
{
	int	*str; 
	int	i;
    size_t    n;

    n = 5;
    str = (int *)ft_calloc(n, sizeof(int));
    i = 0;
	if (!str)
	{
		printf("Erro\n");
		return (1);
	}
	while (i < n)
    {
        printf("str[%d] = %d\n", i, str[i]);
        i++;
    }
	free(str);
	return (0);
}*/