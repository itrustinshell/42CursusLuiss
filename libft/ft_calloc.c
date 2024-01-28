/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:15:30 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 17:17:40 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;
	size_t	len_memory;

	if (size != 0 && count > 2147483647 / size)
		return (0);
	len_memory = count * size;
	memory = (void *)malloc(len_memory);
	if (memory == NULL)
	{
		return (NULL);
	}
	else
		ft_memset(memory, '\0', len_memory);
	return (memory);
}
