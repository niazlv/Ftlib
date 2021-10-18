/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:19:59 by ahector           #+#    #+#             */
/*   Updated: 2021/10/18 19:42:24 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		n;
	int		s1l;
	int		s2l;
	
	if (!s1 && !s2)
		return (NULL);
	s1l = 0;
	s2l = 0;
	if (s1)
		s1l = ft_strlen(s1);
	if (s2)
		s2l = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (s2l+s1l));
	if (!str)
		return (NULL);
	i = 0;
	n = 0;
	while (n < s1l)
		str[i++] = s1[n++];
	n = 0;
	while(n < s2l)
		str[i++] = s2[n++];
	str[i] = 0;
	return (str);
}
