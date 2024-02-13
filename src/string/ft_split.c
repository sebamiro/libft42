//
// smiro
// ft_split.c
// 2024-02
//

#include "string.h"
#include "std/std.h"

static size_t	total_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(s) == 0)
		return (1);
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
			while (s[i] == c)
				i++;
			i--;
		}
		i++;
	}
	return (j + 2);
}

static size_t	total_letters(char const *s, size_t *j, char c)
{
	size_t	i;
	size_t	m;

	m = *j;
	while (s[*j] != c && s[*j])
		*j = *j + 1;
	i = *j - m;
	while (s[*j] == c)
		*j = *j + 1;
	return (i);
}

static void	protect(size_t i, char **str)
{
	while (--i >= 0)
	{
		free(str[i]);
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	t;

	j = 0;
	i = 0;
	s2 = ft_strtrim(s, &c);
	if (!s2) {
		return (NULL);
	}
	str = ft_calloc(total_words(s2, c), sizeof(char *));
	if (!str) {
		return (NULL);
	}
	while (i < total_words(s2, c) - 1) {
		t = j;
		str[i] = ft_substr(s2, t, total_letters(s2, &j, c));
		if (!str[i]) {
			protect(i, str);
			return (NULL);
		}
		i++;
	}
	return (str);
}
