/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyuu <miyuu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:58:49 by miyuu             #+#    #+#             */
/*   Updated: 2024/06/08 17:01:57 by miyuu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*target;

	if (!lst || !del)
		return ;
	target = *lst;
	while (target != NULL)
	{
		tmp = target->next;
		del(target->content);
		free(target);
		target = tmp;
	}
	*lst = NULL;
}
