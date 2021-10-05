/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahector <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:36:59 by ahector           #+#    #+#             */
/*   Updated: 2021/10/05 19:45:28 by ahector          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	c;
	
	c = ft_isalpha(argv[argc-1][0]);
	c += 48;
	write(1, &c, 1);

	return (0);
}
