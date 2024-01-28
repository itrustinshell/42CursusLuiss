/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:30:43 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 18:30:46 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	char	*prefix;
	char	*suffix;
	size_t	size_join;

	if (s1 == NULL)
		return (NULL);
	prefix = (char *)s1;
	if (s2 == NULL || *s2 == '\0')
	{
		join = ft_strdup(prefix);
		return (join);
	}
	suffix = (char *)s2;
	size_join = ft_strlen(suffix) + ft_strlen(prefix) + 1;
	join = (char *)malloc(size_join * sizeof(char));
	if (join == NULL)
		return (NULL);
	ft_memset(join, '\0', size_join);
	ft_strlcpy(join, prefix, size_join);
	ft_strlcat(join, suffix, size_join);
	return (join);
}
