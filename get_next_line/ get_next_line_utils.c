/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    get_next_line_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:47:01 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/26 11:47:01 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while ((d < s) && (i < n))
	{
		d[i] = s[i];
		i++;
	}
	while ((d > s) && (n > 0))
	{
		n--;
		d[n] = s[n];
	}
	return (dest);
}

char *ft_strjoin(char *s1, char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*strjoin;

	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	strjoin = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (strjoin == NULL)
		return (0);
	ft_memmove ((void *)strjoin, (const void *)s1, len_s1);
	ft_memmove ((void *)strjoin + len_s1, (const void *)s2, len_s2 + 1);
	strjoin[len_s1 + len_s2 + 1] = '\0';
	return (strjoin);
}

char *ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

char *get_line(char *str)
{
	int		i;
	char	*line;

	if (!str || !str[0])
		return (NULL);

	i = 0;
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
char *get_rest(char *str)
{
	int		i;
	int		len;
	char	*rest;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i]) // não tem \n, não há resto
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