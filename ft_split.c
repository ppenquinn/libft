/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nappalav <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:09:19 by nappalav          #+#    #+#             */
/*   Updated: 2023/09/20 12:16:23 by nappalav         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	if (s[i] == '\0')
		return (0);
	if (s[i] && s[i] != c)
	{
		word++;
		i++;
	}
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			word++;
		}
		i++;
	}
	return (word);
}

static size_t	ft_count_chr(char const *s, char c)
{
	size_t	i;
	size_t	chr;

	i = 0;
	chr = 0;
	while (s[i] && s[i++] != c)
		chr++;
	return (chr);
}

static void	*handle_malloc(char **str, size_t i)
{
	while (i > 0)
	{
		free(str[i]);
		i--;
	}
	free(str[i]);
	free(str);
	return (NULL);
}

static char	**ft_sep(char *temp, char c, size_t word, char **str)
{
	size_t	i;
	size_t	j;
	size_t	chr;

	i = 0;
	j = 0;
	while (i < word)
	{
		while (temp[j] == c)
			j++;
		chr = ft_count_chr(&temp[j], c);
		str[i] = ft_substr(&temp[j], 0, chr);
		if (!str[i])
		{
			free(temp);
			return (handle_malloc(str, i));
		}
		j += chr;
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	word;
	char	**str;
	char	*temp;

	if (!s)
		return (NULL);
	word = ft_count_words(s, c);
	str = (char **)malloc((word + 1) * sizeof(char **));
	if (!str)
		return (NULL);
	temp = ft_strdup(s);
	if (!temp)
	{
		free(str);
		return (NULL);
	}
	str = ft_sep(temp, c, word, str);
	if (!str)
	{
		return (NULL);
	}
	free(temp);
	return (str);
}

// int main(void)
// {
// 	char *str = "hello!";
// 	char **word = ft_split(str, ' ');
// 	int i = 0;

// 	while (word[i] != (void *)0)
// 	{
// 		printf("%s\n", word[i]);
// 		i++;
// 	}

// 	free(word);
// 	return (0);
// }
