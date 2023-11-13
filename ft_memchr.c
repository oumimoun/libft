/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:18:06 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/05 19:18:45 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = (const unsigned char *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main() {
	 char str[] = "Hello, World!";
	 char *result = (char *)ft_memchr(str, 'W', 15);

	 if (result != NULL) {
		  printf("Found 'W' at position: %ld\n", result - str);
	 } else {
		  printf("The character 'W' was not found.\n");
	 }

	 return 0;
}*/