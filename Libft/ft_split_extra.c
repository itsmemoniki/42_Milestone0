#include "libft.h"
#include <stdio.h>

char	*split_word(const char *s, char c)
{
	return (0);
}

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

// char	**ft_split(char const *s, char c)
// {

// 	return (0);
// }


int main(void)
{
	const char *str ="helloaworld!";
	printf("%i\n", count_words(str, 'a'));
	return (0);
}