/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:36:23 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/02 13:37:32 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>  // Para open()
#include <unistd.h> // Para read() e close()
#include <stdio.h>  
#include <stdlib.h> 

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
int main()
{
	char str[]= "Hello Piscine 42";
	// ft_putendl_fd(str, 1);
	// return (0);
	int fd = open("teste.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Erro ao abrir o arquivo");
		return 1;
	}
	ft_putendl_fd(str, fd);
	ft_putchar_fd('\n', fd);
	close(fd);
	return 0;
}