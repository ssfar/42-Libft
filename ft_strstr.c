/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:06:10 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/18 18:14:31 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	while (*needle && *haystack && *haystack != *needle)
		haystack++;
	if (!*needle || !*haystack)
		return (!*needle ? (char*)haystack : 0);
	i = 0;
	while (needle[i])
	{
		if (haystack[i] != needle[i])
			return (ft_strstr(++haystack, needle));
		i++;
	}
	return ((char*)haystack);
}
