/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:17:24 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/28 16:49:50 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	how_many_words(char const *s, char c)
{
	unsigned int	count_words;
	unsigned int	i;

	i = 0;
	count_words = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	if (s[i] != '\0')
		count_words = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i +1] != c && s[i + 1] != '\0')
			count_words++;
		i++;
	}
	return (count_words);
}

static char	**set_initial_output(const char *s, char c)
{
	char	**output;

	if (s == NULL)
		return (NULL);
	output = malloc((how_many_words(s, c) + 1) * sizeof(char *));
	if (output == NULL)
		return (NULL);
	return (output);
}

static char	**delete(int n, char **output)
{
	while (n > 0)
	{
		free(output[n]);
		n--;
	}
	free(output[n]);
	free(output);
	return (NULL);
}

static void	finding_len(unsigned int *i, char c, unsigned int *initial,
	const char *s)
{
	while (s[*i] == c)
		*i = *i + 1;
	if (s[*i] != '\0')
		*initial = *i;
	while (s[*i] != c && s[*i] != '\0')
		*i = *i + 1;
}

char	**ft_split(const char *s, char c)
{
	unsigned int	initial;
	unsigned int	n;
	unsigned int	i;
	size_t			len;
	char			**output;

	output = set_initial_output(s, c);
	if (!output)
		return (NULL);
	initial = 0;
	i = 0;
	n = 0;
	while (n < (how_many_words(s, c) + 1) - 1)
	{
		finding_len(&i, c, &initial, s);
		len = (size_t)(i - initial);
		output[n] = ft_substr(s, (unsigned int)initial, len);
		if (output[n] == NULL)
			return (delete(n, output));
		n++;
	}
	output[n] = NULL;
	return (output);
}
