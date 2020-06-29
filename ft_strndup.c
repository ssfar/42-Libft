/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 18:59:15 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/19 19:05:16 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*dst;
	size_t	i;

	if (!(dst = (char*)malloc(sizeof(*dst) * (n + 1))))
		return (dst);
	i = 0;
	while (*s1 && n--)
		dst[i++] = *s1++;
	dst[i] = '\0';
	return (dst);
}
