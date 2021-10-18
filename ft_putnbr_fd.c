/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:17:39 by ahector           #+#    #+#             */
/*   Updated: 2021/10/18 19:45:40 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = (unsigned)(-n);
	}
	else
		num = n;
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd((num % 10) + 48, fd);
	}
	else
		ft_putchar_fd(num + 48, fd);
}
