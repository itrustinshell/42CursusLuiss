/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_helpers_part_one.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:03:53 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/10 12:02:11 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	len_arr(unsigned int num)
{
	unsigned int	output;

	output = 0;
	if (num == 0)
		output = 1;
	while (num > 0)
	{
		num /= 16;
		output++;
	}
	return (output);
}

unsigned int	len_arr_uintptr(uintptr_t num)
{
	unsigned int	output;

	output = 0;
	if (num == 0)
		output = 1;
	while (num > 0)
	{
		num /= 16;
		output++;
	}
	return (output);
}

void	fill_arr(unsigned int *arr, unsigned int num)
{
	unsigned int	len;

	len = len_arr(num);
	while (len > 0)
	{
		len--;
		arr[len] = num % 16;
		num /= 16;
	}
}

void	write_arr_elements(unsigned int *arr, int *output, unsigned int num)
{
	unsigned int	tmp;
	char			c;

	tmp = 0;
	while (tmp < len_arr(num))
	{
		if (arr[tmp] == 0 || (arr[tmp] >= 1 && arr[tmp] <= 9))
		{
			c = arr[tmp] + 48;
			write(1, &c, 1);
			*output = *output + 1;
			tmp++;
		}
		else
		{
			c = arr[tmp] + 87;
			write(1, &c, 1);
			*output = *output + 1;
			tmp++;
		}
	}
}

void	write_arr_elements_for_capital_x(unsigned int *arr,
			int *output, unsigned int num)
{
	unsigned int	tmp;
	char			c;

	tmp = 0;
	while (tmp < len_arr(num))
	{
		if (arr[tmp] == 0 || (arr[tmp] >= 1 && arr[tmp] <= 9))
		{
			c = arr[tmp] + 48;
			write(1, &c, 1);
			*output = *output + 1;
			tmp++;
		}
		else
		{
			c = arr[tmp] + 55;
			write(1, &c, 1);
			*output = *output + 1;
			tmp++;
		}
	}
}
