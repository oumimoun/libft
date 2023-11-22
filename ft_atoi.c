/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:10:34 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/20 10:55:04 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	check_overflow(int sign)
{
	if (sign == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	size_t				i;
	int					signe;
	unsigned long long	total;

	i = 0;
	signe = 1;
	total = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (total > (9223372036854775807ULL - (str[i] - '0')) / 10)
			return (check_overflow(signe));
		total = total * 10 + str[i] - '0';
		i++;
	}
	return ((int)(signe * total));
}
