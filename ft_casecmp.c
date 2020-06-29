/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_casecmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 17:24:28 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/19 18:05:24 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_casecmp(char a, char b)
{
	if (ft_isupper(a) && ft_islower(b))
		return ((unsigned char)a - (unsigned char)b + 32);
	if (ft_islower(a) && ft_isupper(b))
		return ((unsigned char)a - (unsigned char)b - 32);
	return ((unsigned char)a - (unsigned char)b);
}
