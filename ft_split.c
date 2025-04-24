/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:35:36 by sade-ara          #+#    #+#             */
/*   Updated: 2025/04/24 11:35:36 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(sizeof(char) * (len +1));
	i = 0;
	if (substr == NULL)
		return (0);
	if (start > ft_strlen((char *)s))
	{
		substr[i] = '\0';
		return (substr);
	}
	while (s[start + i] != '\0' && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
int ft_countwords(char const *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s == c)
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        s++;
    }
    return (count);
}

char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int k;

    if (!s)
        return (NULL);
    result = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
        {
            k = i;
            while (s[k] && s[k] != c)
                k++;
            result[j++] = ft_substr(s, i, k - i);// pode usar o ft_strlcpy aqui ou strdup
            i = k - 1;
        }
        i++;
    }
    result[j] = NULL;
    return (result);
}
void print_split(char **result)
{
    int i = 0;
    while (result[i] != NULL)
    {
        printf("Palavra %d: \"%s\"\n", i, result[i]);
        i++;
    }
}
// Função main
int main(void)
{
    char *frase = "  ola   mundo azul  ";
    char separador = ' ';

    char **resultado = ft_split(frase, separador);

    if (resultado == NULL)
    {
        printf("Erro ao dividir a string.\n");
        return 1;
    }

    print_split(resultado);

    // Liberta a memória (muito importante!)
    int i = 0;
    while (resultado[i])
    {
        free(resultado[i]);
        i++;
    }
    free(resultado);

    return 0;
}