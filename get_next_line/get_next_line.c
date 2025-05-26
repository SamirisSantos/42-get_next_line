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
	char		buffer[BUFFER_SIZE +1];
	int			read_bytes;
	char		*line;

	read_bytes = 1;
	if (fd == -1 || BUFFER_SIZE < 0)
		return (NULL);
	while (read_bytes > 0 && find_strchr(rest, '\n'))
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
			return (NULL);
		buffer[read_bytes] = '\0';
		rest = ft_strjoin(rest, buffer);
	}
	if (!rest)
		return (NULL);
	line = get_line(rest);
	rest = get_rest(rest);
	return (line);
}
