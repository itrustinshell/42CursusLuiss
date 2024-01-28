/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:47:35 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 18:48:42 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = s_len + 1;
	while (i > 0)
	{
		if ((char)c == s[i - 1])
		{
			s = s + (i - 1);
			return ((char *)s);
		}
		else
			i--;
	}
	return (NULL);
}
