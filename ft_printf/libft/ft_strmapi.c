/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:38:42 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 18:39:53 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	i;
	char			*casted_s;
	char			*new;

	casted_s = (char *)s;
	if (s == NULL || f == NULL)
		return (NULL);
	new = (char *)malloc((ft_strlen(casted_s) + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (casted_s[i] != '\0')
	{
		new[i] = f(i, casted_s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
