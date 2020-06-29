/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:19:53 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/18 19:03:17 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	tab = NULL;
	if (s)
	{
		if (!(tab = ft_memalloc(sizeof(char*) * (ft_count_word(s, c) + 1))))
			return (NULL);
		i = 0;
		k = 0;
		while (s && s[i])
		{
			while (s[i] == c)
				i++;
			j = i;
			while (s[j] != c && s[j])
				j++;
			if (s[j - 1] != c)
				tab[k++] = ft_strsub(s, i, j - i);
			i = j;
		}
	}
	return (tab);
}
