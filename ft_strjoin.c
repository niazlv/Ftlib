/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:19:59 by ahector           #+#    #+#             */
/*   Updated: 2021/10/25 16:28:52 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1l;
	int		s2l;

	s1l = 0;
	s2l = 0;
	if (s1)
		s1l = ft_strlen(s1);
	if (s2)
		s2l = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (s1l + s2l + 1));
	ft_memset(str, 0, s1l + s2l + 1);
	ft_memcpy(str, s1, s1l);
	ft_memcpy(&str[s1l], s2, s2l);
	return (str);
}
