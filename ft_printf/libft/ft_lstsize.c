/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: largenzi <largenzi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:03:43 by largenzi          #+#    #+#             */
/*   Updated: 2024/01/26 18:05:17 by largenzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*current;

	if (lst != NULL)
	{
		i = 1;
		current = lst;
		while (current -> next)
		{
			i++;
			current = current -> next;
		}
		return (i);
	}
	return (0);
}
