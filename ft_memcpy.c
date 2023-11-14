/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:30:15 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/14 19:12:53 by oumimoun         ###   ########.fr       */
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

// int main() {
// 	 char src[] = "This is a test.";
// 	 char dest[16];
// 	 ft_memcpy(dest ,src , sizeof(src));

// 	 printf("dest contents: %s\n", dest);

// 	 return 0;
// }
