/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:54:28 by largenzi          #+#    #+#             */
/*   Updated: 2024/02/10 18:55:08 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

uintptr_t	*ft_itoa_base_ptr(uintptr_t address)
{
	uintptr_t	*memory;
	uintptr_t	tmp;
	int			count;
	int			i;

	tmp = address;
	count = 0;
	if (tmp == 0)
		return (NULL);
	while (tmp > 0)
	{
		tmp /= 16;
		count++;
	}
	memory = malloc((count) * sizeof(uintptr_t));
	if (!memory)
		return (NULL);
	i = 0;
	while (i < (count))
	{
		memory[i] = address % 16;
		address = address / 16;
		i++;
	}
	return (memory);
}
