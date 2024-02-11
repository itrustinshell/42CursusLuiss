/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 12:26:58 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/10 12:27:04 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_c(const int c, int *i, int *count)
{
	char	b;

	b = (char)c;
	write(1, &b, 1);
	*count = *count + 1;
	*i = *i + 2;
}

void	ft_printf_s(const char *str, int *i, int *count)
{
	if (str == NULL)
	{
		write(1, "(null)", 6);
		*count = *count + 6;
		*i = *i + 2;
		return ;
	}
	if (*str == '\0')
		*count = *count + 0;
	else
	{
		while (*str != '\0')
		{
			write(1, str, 1);
			str++;
			*count = *count + 1;
		}
	}
	*i = *i + 2;
}
