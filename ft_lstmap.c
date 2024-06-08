/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyuu <miyuu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:09:05 by miyuu             #+#    #+#             */
/*   Updated: 2024/06/08 18:35:58 by miyuu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*p;
	void	*fir;

	p = NULL;
	tmp = NULL;
	if (!lst || !f || !del)
		return (NULL);
	if (lst != NULL)
	{
		fir = f(lst->content);
		if (fir == NULL)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		p = ft_lstnew(fir);
		if (p == NULL)
		{
			ft_lstclear(&tmp, del);
			del(fir);
			return (NULL);
		}
		tmp = p;
		while (lst->next != NULL)
		{
			lst = lst->next;
			fir = f(lst->content);
			if (fir == NULL)
			{
				ft_lstclear(&tmp, del);
				return (NULL);
			}
			p->next = ft_lstnew(fir);
			if (p->next == NULL)
			{
				ft_lstclear(&tmp, del);
				del(fir);
				return (NULL);
			}
			p = p->next;
		}
	}
	p = tmp;
	return (p);
}
