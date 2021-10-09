/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:39:13 by ahector           #+#    #+#             */
/*   Updated: 2021/10/09 18:51:01 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;

	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	i = dst_len;
	while (src[dst_len - i] && dst_len + 1 < dstsize)
	{
		dst[dst_len] = src[dst_len - i];
		dst_len++;
	}
	if (i < dstsize)
		dst[dst_len] = '\0';
	return (i + ft_strlen(src));
}
