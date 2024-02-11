/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:28:44 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/10 18:56:11 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_itoa_base_x(int num)
{
	unsigned int	*arr;
	int				output;

	output = 0;
	arr = malloc(len_arr(num) * sizeof(int));
	if (!arr)
		return (0);
	fill_arr(arr, num);
	write_arr_elements(arr, &output, num);
	free(arr);
	return (output);
}

int	ft_itoa_base_capital_x(int num)
{
	unsigned int	*arr;
	int				output;

	output = 0;
	arr = malloc(len_arr(num) * sizeof(int));
	if (!arr)
		return (0);
	fill_arr(arr, num);
	write_arr_elements_for_capital_x(arr, &output, num);
	free(arr);
	return (output);
}
