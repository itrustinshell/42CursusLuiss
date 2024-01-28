/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:41:58 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 18:47:20 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	if (len == 0 || *big == '\0' )
		return (NULL);
	if (len < ft_strlen(little))
		return (NULL);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && little[j]
			!= '\0' && big[i + j] != '\0' && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		if (big[i + j] == '\0' || (i + j) >= len)
			return (NULL);
		i++;
	}
	return (NULL);
}
