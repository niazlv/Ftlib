/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:59:17 by ahector           #+#    #+#             */
/*   Updated: 2021/10/25 16:40:01 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int				len;

	len = 0;
	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_itoa_sign(int n)
{
	int				sign;

	if (n < 0)
		sign = 1;
	else
		sign = 0;
	return (sign);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*str;
	int				size;

	str = NULL;
	size = ft_numlen(n);
	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size--] = '\0';
	while (size >= 0)
	{
		str[size--] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (ft_itoa_sign(n) == 1)
		str[0] = '-';
	return (str);
}
