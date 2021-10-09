/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 19:50:13 by ahector           #+#    #+#             */
/*   Updated: 2021/10/09 19:55:46 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
	char	*cp;
	size_t	i;

	cp = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!cp)
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		cp[i] = s1[i];
		i++;
	}
	cp[i] = 0;
	return (cp);
}
