/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 19:07:36 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/14 19:10:54 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp;

	while (*alst)
	{
		tmp = (*alst)->next;
		ft_lstdelone((alst), del);
		*alst = tmp;
	}
	free(*alst);
	*alst = NULL;
}
