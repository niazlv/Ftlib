/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:13:16 by ahector           #+#    #+#             */
/*   Updated: 2021/10/18 20:24:44 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**strstr;
	size_t	i;

	i = 0;
	while(s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
}
