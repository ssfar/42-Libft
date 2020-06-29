/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:43:18 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/18 19:34:27 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;
	char	found;

	found = 0;
	while (*s)
	{
		if (*s == c)
		{
			pos = (char*)s;
			found = 1;
		}
		s++;
	}
	if (*s == c)
		pos = (char*)s;
	return (found || *s == c ? (char*)pos : NULL);
}
