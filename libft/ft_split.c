/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sade-ara <sade-ara@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:09:43 by sade-ara          #+#    #+#             */
/*   Updated: 2025/05/01 14:17:35 by sade-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	count;
	int	in_word;
	int	i;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	res = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!s || !res)
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
			res[j++] = ft_substr(s, i, k - i);
			i = k - 1;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}
// int main(void)
// {
// 	char *str = "  Hi, 42 Porto  ";
// 	char d = ' ';
// 	char **res = ft_split(str, d);
// 	int i = 0;
// 	while (res[i] != NULL)
// 	{
// 		printf("Palavra %d: \"%s\"\n", i, res[i]);
// 		i++;
// 	}
// 	int j = 0;
// 	while (res[j])
// 	{
// 		free(res[j]);
// 		j++;
// 	}
// 	free(res);
// 	return 0;
// }