#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 32
#endif

// Funções auxiliares que você vai criar depois:
char *ft_strjoin(char *s1, char *s2);
int ft_strchr(const char *s, int c);
char *get_line(char *str);
char *get_rest(char *str);

char *get_next_line(int fd)
{
    static char *rest;      // guarda o que sobrou da última leitura
    char buffer[BUFFER_SIZE + 1];
    int bytes_read;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    bytes_read = 1;
    while (bytes_read > 0 && !ft_strchr(rest, '\n'))
    {
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read == -1)
            return NULL;
        buffer[bytes_read] = '\0';
        rest = ft_strjoin(rest, buffer);  // concatena o buffer com o que já tinha
    }

    if (!rest)
        return NULL;

    line = get_line(rest);      // extrai a linha completa até o '\n'
    rest = get_rest(rest);      // guarda o que sobrou para a próxima chamada

    return line;
}
