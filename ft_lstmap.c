/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyuu <miyuu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:09:05 by miyuu             #+#    #+#             */
/*   Updated: 2024/06/08 17:20:53 by miyuu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*p;

	p = NULL;
	tmp = NULL;
	if (!lst || !f || !del)
		return (NULL);
	if (lst != NULL)
	{
		p = ft_lstnew(f(lst->content));
		tmp = p;
		while (lst->next != NULL)
		{
			lst = lst->next;
			p->next = ft_lstnew(f(lst->content));
			if (p->next == NULL)
			{
				ft_lstclear(&tmp, del);
				return (NULL);
			}
			p = p->next;
		}
	}
	p = tmp;
	return (p);
}
