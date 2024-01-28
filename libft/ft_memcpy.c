/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:09:09 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 18:09:39 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dest_p;
	char	*src_p;

	if (dest == NULL && src == NULL)
		return (dest);
	dest_p = (char *)dest;
	src_p = (char *)src;
	i = 0;
	while (i < n)
	{
		*dest_p = *src_p;
		dest_p++;
		src_p++;
		i++;
	}
	return (dest);
}
