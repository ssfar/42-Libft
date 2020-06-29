/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:14:25 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/19 21:40:05 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcasestr(const char *haystack, const char *needle)
{
	size_t	i;

	while (*needle && *haystack && ft_casecmp(*haystack, *needle))
		haystack++;
	if (!*needle || !*haystack)
		return (!*needle ? (char*)haystack : 0);
	i = 0;
	while (needle[i])
	{
		if (ft_casecmp(haystack[i], needle[i]))
			return (ft_strcasestr(++haystack, needle));
		i++;
	}
	return ((char*)haystack);
}
