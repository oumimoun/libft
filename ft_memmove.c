/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:21:08 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/14 19:13:15 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	s = src;
	d = dest;
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else if (d < s)
		ft_memcpy(dest, src, len);
	return (dest);
}
// int main()
// {
// 	// char dest1[] = "";
// 	// ft_memmove(dest1 + 2, dest1, 4);
// 	// printf("|%s|\n", dest1);
// 	char destf[] = "";
// 	memmove(destf + 2, destf, 4);
// 	printf("|%s|\n", destf);
// 	return (0);
// }