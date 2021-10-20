#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**str;
	int	i;
	int	count;
	int	j;
	int	u;

	i = 0;
	count = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if ((char)s[i] == c)
			count++;
		i++;
	}
	str = (char **)malloc(sizeof(char *) * (count + 1 + 1));
	i = 0;
	j = 0;
	u = 0;
	while (i < count + 1)
	{
		while(s[j] != c)
			j++;
		str[i++] = (char *)malloc(sizeof(char *) * j++ + 1);
	}
	i = -1;
	j = 0;
	while (i++ < count)
	{
		u = 0;
		while(s[j] != c)
		{
			str[i][u] = *(s+count+(1 * i) + j);

			u++;
			j++;
		}
		str[i][u] = 0;
	}
	str[i] = NULL;
	return (str);
}
