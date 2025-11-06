/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:44:45 by mcrenn            #+#    #+#             */
/*   Updated: 2025/11/06 18:18:20 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*start;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	start = *lst;
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;
	*lst = start;
}
