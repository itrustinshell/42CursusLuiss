/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:05:34 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 18:06:34 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	b;

	p = (unsigned char *)s;
	b = (unsigned char) c;
	while (n > 0)
	{
		if (*p == b)
			return (p);
		else
			p++;
		n--;
	}
	return (NULL);
}
