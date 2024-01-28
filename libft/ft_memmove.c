/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:09:50 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/28 16:49:53 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move(char *temp_dst, char *temp_src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		temp_dst[i] = temp_src[i];
		i++;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dst;
	char	*temp_src;
	size_t	i;	

	temp_dst = (char *)dst;
	temp_src = (char *)src;
	if (temp_dst == temp_src)
		return (dst);
	else if (temp_dst < temp_src)
		move(temp_dst, temp_src, len);
	else
	{
		i = len;
		while (i > 0)
		{
			temp_dst[i - 1] = temp_src[i - 1];
			i--;
		}
	}
	return (dst);
}
