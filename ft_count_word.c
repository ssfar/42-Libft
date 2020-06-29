/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 18:42:35 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/19 21:10:51 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_word(const char *s, char separator)
{
	size_t		word;

	word = 0;
	while (s && *s)
	{
		while (*s == separator)
			s++;
		if (*s)
			word++;
		while (*s && *s != separator)
			s++;
	}
	return (word);
}
