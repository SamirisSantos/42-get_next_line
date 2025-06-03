/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:46:40 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/28 14:12:36 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*read_line(char *str);
char	*get_rest(char *str);
char	*get_next_line(int fd);
char	*read_bytes(int fd, char *rest);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *s, int c);

size_t	ft_strlen(const char *c);

void	*ft_memmove(void *dest, const void *src, size_t n);

#endif