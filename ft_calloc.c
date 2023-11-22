/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:47:57 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/22 20:33:26 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*p;

	if (count != 0 && size > 9223372036854775807ULL / count)
		return (0);
	total = count * size;
	p = malloc(total);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, total);
	return (p);
}
