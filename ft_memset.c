/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:59:10 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/28 15:29:44 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*byte_ptr;

	i = 0;
	byte_ptr = (unsigned char *)ptr;
	while (i < num)
	{
		byte_ptr[i] = (unsigned char)value;
		i++;
	}
	return (byte_ptr);
}
// int main()
// {
// 	int i = 1;

// 	ft_memset((char *)&i, 0, 1);
// 	ft_memset((char *)&i + 1, 0, 1);
// 	ft_memset((char *)&i + 2, 0, 1);
// 	ft_memset((char *)&i + 3, 128, 1);
// 	printf("%d", i);
// }