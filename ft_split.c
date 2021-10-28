/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <ahector@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:01:50 by ahector           #+#    #+#             */
/*   Updated: 2021/10/28 15:59:20 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static char	*ft_get_str(char *str, char c)
{
	char	*s;

	s = str;
	while (*str && *str != c)
		str++;
	*str = '\0';
	return (ft_strdup(s));
}

static void	ft_free_mass(char **mass, size_t i)
{
	while (i--)
		free(mass[i]);
	free(*mass);
}

static char	**ft_get_strings(char *s, char c, size_t words_count, size_t i)
{
	char	**strs;
	char	*str;

	strs = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (strs)
	{
		while (i < words_count)
		{
			while (*s == c)
				s++;
			if (*s)
			{
				str = ft_get_str(s, c);
				if (!str)
				{
					ft_free_mass(strs, i);
					return (NULL);
				}
				strs[i++] = str;
				s += (ft_strlen(str) + 1);
			}
		}
		strs[i] = NULL;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*line;

	line = ft_strdup((char *)s);
	if (!s || !line)
		return (NULL);
	str = ft_get_strings(line, c, ft_count_words(s, c), 0);
	free(line);
	return (str);
}
