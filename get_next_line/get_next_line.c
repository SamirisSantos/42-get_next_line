/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:46:52 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/26 11:46:52 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*rest;
	char		buffer[BUFFER_SIZE + 1];
	char		*line;
	int			read_bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
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
