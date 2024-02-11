/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:08:37 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/08 19:51:06 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(int x_num, int *i, int *count)
{
	*count = *count + ft_itoa_base_x(x_num);
	*i = *i + 2;
}

void	ft_printf_capital_x(int num, int *i, int *count)
{
	*count = *count + ft_itoa_base_capital_x(num);
	*i = *i + 2;
}
