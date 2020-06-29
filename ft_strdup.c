/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 19:43:48 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/18 18:00:09 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	if (!(dst = (char*)malloc(sizeof(*dst) * (ft_strlen(s1) + 1))))
		return (dst);
	i = 0;
	while (*s1)
		dst[i++] = *s1++;
	dst[i] = '\0';
	return (dst);
}
