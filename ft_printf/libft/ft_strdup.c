/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:23:57 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 18:24:53 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size_malloc;
	char	*new;
	char	*initial;

	size_malloc = (ft_strlen(s) + 1) * sizeof(char);
	new = malloc(size_malloc);
	if (new == NULL)
	{
		return (NULL);
	}
	else
		initial = new;
	while (*s != '\0')
	{
		*new = *s;
		new++;
		s++;
	}
	*new = '\0';
	new = initial;
	return (new);
}
