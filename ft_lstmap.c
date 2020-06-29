/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 20:14:50 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/15 14:49:26 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*new;
	t_list	*old;
	t_list	*first;

	new = NULL;
	first = NULL;
	while (lst)
	{
		tmp = (lst)->next;
		lst = f(lst);
		old = new;
		new = ft_lstnew((lst)->content, (lst)->content_size);
		if (!first)
			first = new;
		if (old)
			(old)->next = new;
		lst = tmp;
	}
	return (first);
}
