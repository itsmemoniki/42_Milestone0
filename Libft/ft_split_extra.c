/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_extra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:14:23 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/18 19:14:24 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		if (*s != c)
		{
			words++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (words);
}

char	*split_word(const char *s, char c)
{
	char	*word;
	size_t	word_len;
	size_t	i;

	word_len = 0;
	while (s[word_len] && s[word_len] != c)
		word_len++;
	word = (char *) malloc((word_len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	free_words(char **words, size_t i_word)
{
	while (i_word > 0)
	{
		i_word--;
		free(words[i_word]);
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i_word;

	if (!s)
		return (NULL);
	words = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i_word = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			words[i_word] = split_word(s, c);
			if (!words[i_word])
				return (free_words(words, i_word), NULL);
			while (*s && *s != c)
				s++;
			i_word++;
		}
	}
	words[i_word] = '\0';
	return (words);
}
// #include <stdio.h>
// int main(void)
// {
// 	const char *str ="helloaworld!ayes";
// 	char **words = ft_split(str, 'a');
// 	printf("%s\n", words[2]);
// 	return (0);
// }
