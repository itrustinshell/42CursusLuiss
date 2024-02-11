/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_helpers_part_two.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:03:53 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/10 12:03:38 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_arr_elements_uintptr(uintptr_t *arr, int *count, uintptr_t num)
{
	uintptr_t	j;
	char		c;

	j = len_arr_uintptr(num);
	while (j > 0)
	{
		j--;
		if (arr[j] == 0 || (arr[j] >= 1 && arr[j] <= 9))
		{
			c = arr[j] + 48;
			write (1, &c, 1);
			*count = *count + 1;
		}
		else
		{
			c = arr[j] + 87;
			write(1, &c, 1);
			*count = *count + 1;
		}
	}
}
