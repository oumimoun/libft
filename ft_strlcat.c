/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:04:31 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/24 12:54:34 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lsrc;
	unsigned int	ldest;

	if (!dest && !size)
		return (0);
	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	i = 0;
	j = ldest;
	if (size == 0 || size <= ldest)
		return (lsrc + size);
	while (src[i] && i < (size - 1) - ldest)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (lsrc + ldest);
}
