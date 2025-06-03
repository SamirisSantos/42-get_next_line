/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:46:52 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/28 16:59:44 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(char *str)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!str || !str[0])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	ft_memmove(line, str, i);
	line[i] = '\0';
	return (line);
}

char	*get_rest(char *str)
{
	size_t	i;
	int		len;
	char	*rest;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	i++;
	len = ft_strlen(str + i);
	rest = (char *)malloc(sizeof(char) * (len + 1));
	if (!rest)
		return (NULL);
	ft_memmove(rest, str + i, len);
	rest[len] = '\0';
	free(str);
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*rest;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	int			read_bytes;

	read_bytes = 1;
	while (read_bytes > 0 && !ft_strchr(rest, '\n'))
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(rest);
			rest = NULL;
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		rest = ft_strjoin(rest, buffer);
	}
	if (!rest)
		return (NULL);
	line = get_line(rest);
	rest = get_rest(rest);
	return (line);
}
// int main()
// {
// 		int	fd;
// 		fd = open("test.txt", O_RDONLY);
// 	if (fd < 0)
// 	{
// 		perror("Error opening file");
// 		return (1);
// 	}

// 	char	*line;
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 	}
// 	printf("\n");
// 	close(fd);
// 	return (0);
// }
