/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:23:39 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/10 18:51:10 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

int	check_special_cases_u(unsigned int n, int *count)
{
	if (n == 0)
	{
		write(1, "0", 1);
		*count = *count + 1;
	}
	return (*count);
}

int	calculation_of_divisor_u(unsigned int n)
{
	int	divisor;

	divisor = 1;
	while (n >= 10)
	{
		n /= 10;
		divisor *= 10;
	}
	return (divisor);
}

void	write_number_and_count_u(unsigned int n, int divisor, int *output_count)
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

int	ft_itoa_u(unsigned int n)
{
	int		output_count;
	int		divisor;

	output_count = 0;
	if (check_special_cases_u(n, &output_count))
		return (output_count);
	divisor = calculation_of_divisor_u(n);
	write_number_and_count_u(n, divisor, &output_count);
	return (output_count);
}
