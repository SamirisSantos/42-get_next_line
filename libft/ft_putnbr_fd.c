/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:36:41 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/29 16:16:25 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	long	nb;
	char	str[12];

	i = 0;
	nb = n;
	if (nb == 0)
		ft_putchar_fd('0', fd);
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	str[i] = '\0';
	while (i > 0)
	{
		i--;
		ft_putchar_fd(str[i], fd);
	}
}
// int main()
// {
// 	int fd = 1; 
// 	ft_putnbr_fd(-2147483648, fd); 
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(5432, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(0, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(-5432, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(2147483647, fd);
// 	ft_putchar_fd('\n', fd); 
// 	return (0);
// 	/*
// 	// Testando a função com um arquivo
// 	fd = open("saida.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd == -1)
//     {
//         perror("Erro ao abrir o arquivo");
//         return 1;
//     }
// 	ft_putnbr_fd(-2147483648, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(5432, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(0, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(-5432, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(2147483647, fd);
// 	close(fd);
// 	return 0;
// 	// O conteúdo estara no arquivo "saida.txt"
// 	*/
// }