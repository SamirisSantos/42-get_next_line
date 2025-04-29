/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:36:23 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/29 16:04:48 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
// int main()
// {
// 	char str[]= "Hello Piscine 42";
// 	ft_putendl_fd(str, 1);
// 	return (0);
// 	/*int fd = open("saida.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("Erro ao abrir o arquivo");
// 		return 1;
// 	}
// 	ft_putendl_fd(str, fd);
// 	ft_putchar_fd('\n', fd);
// 	close(fd);
// 	return 0;*/
// }