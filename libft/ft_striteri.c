/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:25:59 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 19:28:52 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	char			*temp;

	if (s == NULL || f == NULL)
		return ;
	temp = s;
	i = 0;
	while (temp[i] != '\0')
	{
		f(i, &temp[i]);
		i++;
	}
}
