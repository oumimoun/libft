/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:25:00 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/05 19:18:48 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main() {
	  char str1[] = "Hello, World!";
	  char str2[] = "HSllo, World!";
	 int result = ft_memcmp(str1, str2, 6);
	 printf("Result: %d\n", result);
	 if (result < 0) {
		  printf("data1 is smaller than data2\n");
	 } else if (result > 0) {
		  printf("data1 is larger than data2\n");
	 } else {
		  printf("data1 and data2 are equal\n");
	 }
	 return 0;
}*/