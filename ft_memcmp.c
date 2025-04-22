/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:02:51 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/22 16:25:27 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*src1;
	const char	*src2;

	i = 0;
	src1 = s1;
	src2 = s2;
	if (n == 0)
		return (0);
	while ((i < n - 1) && (src1[i] == src2[i]))
	{
		i++;
	}
	return (src1[i] - src2[i]);
}
/*int	main(void)
{
	char src1[] = "42 Porto";
	char src2[] = "42 Portoss";

	int ret = ft_memcmp(src1, src2, 9);
	printf("ft_memcmp: %d\n", ret);

    ret = memcmp(src1, src2, 9);
	printf("memcmp: %d\n", ret);
	return (0);
}*/
