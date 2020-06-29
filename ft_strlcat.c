/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:43:32 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/19 21:54:42 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;
	size_t	dst_size;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	if (dst_size >= size)
		src_size += size;
	else
		src_size += dst_size;
	while (dst_size < size - 1 && src[i])
		dst[dst_size++] = src[i++];
	dst[dst_size] = '\0';
	return (src_size);
}
