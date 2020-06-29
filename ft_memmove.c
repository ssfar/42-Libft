/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 11:11:49 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/19 21:19:20 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;

	i = 0;
	if (dst != src)
		while (len--)
		{
			if (dst < src)
				((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
			else if (dst > src)
				((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
			i++;
		}
	return (dst);
}
