/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:53:31 by ahector           #+#    #+#             */
/*   Updated: 2021/10/09 18:26:46 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str == '\f' || *str == '\n' || *str == '\r' \
		|| *str == '\t' || *str == '\v' || *str == ' ')
		str++;
	if (*str == '-')
		sign = -sign;
	if (*str == '+' || *str == '-')
		str++;
	while ('0' <= *str && *str <= '9')
		num = (num * 10) + *str++ - '0';
	return (num * sign);
}
