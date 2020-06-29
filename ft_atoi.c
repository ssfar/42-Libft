/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:06:49 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/18 19:36:52 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	char				negative;
	long long			nb;

	negative = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			negative = 1;
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + *str++ - '0';
		if (nb < 0)
			return (negative ? 0 : -1);
	}
	return (negative ? -nb : nb);
}
