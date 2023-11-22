/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:30:15 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/21 16:51:22 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*byte_dest;
	char		*byte_src;

	if (!src && !dest)
		return (NULL);
	if (src == dest)
		return (dest);
	i = 0;
	byte_dest = (char *)dest;
	byte_src = (char *)src;
	while (i < n)
	{
		byte_dest[i] = byte_src[i];
		i++;
	}
	return (byte_dest);
}
