/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:37:08 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 18:38:20 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*initial;
	size_t		count;

	initial = s;
	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	s = initial;
	return (count);
}
