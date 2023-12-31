/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexadecimal_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:09:24 by dgerguri          #+#    #+#             */
/*   Updated: 2023/09/09 16:24:46 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexadecimal_n_length(unsigned long number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		len++;
		number = number / 16;
	}
	return (len);
}

int	hexadecimal_printf(unsigned long number, char index, int fd)
{
	if (number >= 16)
	{
		hexadecimal_printf(number / 16, index, fd);
		hexadecimal_printf(number % 16, index, fd);
	}
	else if (number >= 0 && number <= 9)
	{
		ft_putchar_fd(number + 48, fd);
	}
	else if (number >= 10 && number <= 15)
	{
		if (index == 'x')
		{
			ft_putchar_fd(number + 87, fd);
		}
		else if (index == 'X')
		{
			ft_putchar_fd(number + 55, fd);
		}
	}
	return (hexadecimal_n_length(number));
}
