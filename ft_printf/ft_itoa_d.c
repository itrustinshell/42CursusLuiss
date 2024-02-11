/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:23:39 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/10 18:50:09 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_special_cases(int n, int *count)
{
	if (n == 0)
	{
		write(1, "0", 1);
		*count = *count + 1;
	}
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count = *count + 11;
	}
	return (*count);
}

int	calculation_of_divisor(int n)
{
	int	divisor;

	divisor = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		divisor *= 10;
	}
	return (divisor);
}

void	write_number_and_count(int n, int divisor, int *output_count)
{
	int		result;
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		*output_count = *output_count + 1;
		n = -n;
	}
	result = 0;
	while (divisor > 0)
	{
		c = ((n / divisor) % 10) + 48;
		write(1, &c, 1);
		divisor = divisor / 10;
		*output_count = *output_count + 1;
	}
}

int	ft_itoa_d(int n)
{
	int		output_count;
	int		divisor;

	output_count = 0;
	if (check_special_cases(n, &output_count))
		return (output_count);
	divisor = calculation_of_divisor(n);
	write_number_and_count(n, divisor, &output_count);
	return (output_count);
}
