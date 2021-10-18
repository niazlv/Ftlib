/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 18:22:00 by ahector           #+#    #+#             */
/*   Updated: 2021/10/18 19:44:57 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		start = s_len;
	if (start < 0)
		start = 0;
	if (len < 0)
		len = 0;
	if ((start + len) > s_len)
		len = s_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str)
	{
		ft_memset(str, 0, len + 1);
		ft_memcpy(str, &s[start], len);
	}
	return (str);
}
