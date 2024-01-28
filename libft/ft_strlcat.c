/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:15:39 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/28 16:52:43 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	strlcat_iterattors(char *dst, const char *src, size_t size,
	char *temp)
{
	size_t	i;

	i = size - 1;
	while (*dst != '\0' && i > 0)
	{
		dst++;
		i--;
	}
	while (*src != '\0' && i > 0)
	{
		*dst = *src;
		dst++;
		src++;
		i--;
	}
	*dst = '\0';
	dst = temp;
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	length_dst;
	size_t	length_src;
	char	*temp;

	temp = dst;
	length_src = ft_strlen(src);
	if (size == 0)
		return (length_src);
	length_dst = ft_strlen(dst);
	if (length_dst >= size)
		return (size + length_src);
	strlcat_iterattors(dst, src, size, temp);
	return (length_dst + length_src);
}
