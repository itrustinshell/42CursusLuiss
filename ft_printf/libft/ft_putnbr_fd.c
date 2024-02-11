/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:15:09 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/28 16:49:23 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	some_special_cases(int number, int fd)
{
	if (number == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (number == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
}

static int	check_if_negative(int number, int fd)
{
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number *= -1;
	}
	return (number);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	number;
	int	divisor;
	int	mem_n;

	number = n;
	if (number == -2147483648 || number == 0)
	{
		some_special_cases(number, fd);
		return ;
	}
	number = check_if_negative(number, fd);
	divisor = 1;
	mem_n = number;
	while (mem_n >= 10)
	{
		mem_n /= 10;
		divisor *= 10;
	}
	while (divisor >= 1)
	{
		ft_putchar_fd(((number / divisor) % 10 + '0'), fd);
		divisor /= 10;
	}
}
