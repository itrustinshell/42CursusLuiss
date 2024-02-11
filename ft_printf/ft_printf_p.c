/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 17:42:32 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/10 12:05:23 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	if_num_iszero_linux(uintptr_t num, int *count)
{
	if (num == 0)
	{
		write (1, "(nil)", 5);
		*count = *count + 5;
	}
}

void	if_num_iszero_macos(uintptr_t num, int *count, int *i)
{
	if (num == 0)
	{
		write(1, "0x0", 3);
		*count = *count + 3;
		*i = *i + 2;
	}
}

void	ft_printf_linux_p(uintptr_t num, int *i, int *count)
{
	uintptr_t	tmp;
	uintptr_t	*arr;

	tmp = num;
	if (tmp == 0)
		if_num_iszero_linux(num, count);
	else
	{
		write (1, "0x", 2);
		*count = *count + 2;
		arr = ft_itoa_base_ptr(num);
		write_arr_elements_uintptr(arr, count, num);
		free(arr);
	}
	*i = *i + 2;
}

void	ft_printf_macos_p(uintptr_t num, int *i, int *count)
{
	int			len;
	uintptr_t	tmp;
	uintptr_t	*arr;

	len = 0;
	tmp = num;
	if (!num)
	{
		if_num_iszero_macos(num, count, i);
		return ;
	}
	write(1, "0x", 2);
	*count = *count + 2;
	arr = ft_itoa_base_ptr(num);
	write_arr_elements_uintptr(arr, count, num);
	free(arr);
	*i = *i + 2;
}
