/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:36:41 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/27 17:23:47 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	int		i;
	size_t	nb;
	char	str[12];

	i = 0;
	nb = n;
	if(n == 0)
		ft_putchar_fd('0', fd);
	itoa(n, str, 10);
}