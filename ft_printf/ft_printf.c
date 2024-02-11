/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:00:34 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/09 22:38:06 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	little_iteration(char const *str, int *i, int *count)
{
	while (str[*i] != '%' && str[*i])
	{
		write(1, &str[*i], 1);
		*i = *i + 1;
		*count = *count + 1;
	}
}

void	functions_iterations(char const *str, int *i, int *count, va_list ap)
{
	while (str[*i])
	{
		little_iteration(str, i, count);
		if (str[*i] == '%' && str[*i + 1] == 'c')
			ft_printf_c(va_arg(ap, int), i, count);
		if (str[*i] == '%' && str[*i + 1] == 'd')
			ft_printf_d(va_arg(ap, int), i, count);
		if (str[*i] == '%' && str[*i + 1] == 'i')
			ft_printf_d(va_arg(ap, int), i, count);
		if (str[*i] == '%' && str[*i + 1] == 'p')
			ft_printf_macos_p(va_arg(ap, uintptr_t), i, count);
		if (str[*i] == '%' && str[*i + 1] == 's')
			ft_printf_s(va_arg(ap, char *), i, count);
		if (str[*i] == '%' && str[*i + 1] == 'x')
			ft_printf_x(va_arg(ap, int), i, count);
		if (str[*i] == '%' && str[*i + 1] == 'X')
			ft_printf_capital_x(va_arg(ap, int), i, count);
		if (str[*i] == '%' && str[*i + 1] == '%')
			ft_printf_percent(i, count);
		if (str[*i] == '%' && str[*i + 1] == 'u')
			ft_printf_u(va_arg(ap, unsigned int), i, count);
	}
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		count;
	int		i;

	va_start(ap, str);
	count = 0;
	i = 0;
	functions_iterations(str, &i, &count, ap);
	va_end(ap);
	return (count);
}
