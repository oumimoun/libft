/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:59:10 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/14 19:13:25 by oumimoun         ###   ########.fr       */
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
/*
int main() {
	 char buffer[50] = "GeeksForGeeks is for programming geeks.";
	 ft_memset(buffer + 13, '.', 8);

	 printf("Buffer contents: %s\n", buffer);

	 return 0;
}*/