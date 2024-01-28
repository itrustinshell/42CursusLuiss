/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:49:11 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/28 15:44:21 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*special_case(char const *s1, char const *set)
{
	char	*output;

	output = NULL;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*s1 == '\0')
	{
		output = (char *)malloc(1 * sizeof(char));
		if (output == NULL)
			return (NULL);
		output[0] = '\0';
	}
	return (output);
}

char	*if_current_is_nullterminator(void)
{
	char	*output;

	output = (char *)malloc(1 * sizeof(char));
	if (output == NULL)
		return (NULL);
	output[0] = '\0';
	return (output);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*del;
	char	*output;
	size_t	i;
	size_t	j;

	if (s1 == NULL || set == NULL || *s1 == '\0')
		return (special_case(s1, set));
	str = (char *)s1;
	del = (char *)set;
	i = 0;
	while (ft_strchr(del, str[i]) != NULL && str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (if_current_is_nullterminator());
	j = ft_strlen(str) - 1;
	while (ft_strchr(del, str[j]) != NULL && j > i)
		j--;
	output = (char *)malloc((j - i + 1 + 1) * sizeof(char));
	if (output == NULL)
		return (NULL);
	ft_strlcpy(output, &str[i], (j - i + 1 + 1));
	return (output);
}
