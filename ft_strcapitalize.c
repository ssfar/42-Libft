/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:47:08 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/19 15:30:01 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
	{
		if (ft_islower(str[i]) && (i == 0
				|| (i != 0 && !ft_isalnum(str[i - 1]))))
			str[i] -= 32;
		else if (i != 0 && ft_isupper(str[i]) && ft_isalnum(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}
