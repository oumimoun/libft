/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:18:06 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/28 17:49:52 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *p;

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
// int main()
// {
// 	int i = 0;
// 	int s[] = {1, 2, 54, 28, 85, 56, 12};

// 	printf("%p", *(int *)ft_memchr(s, 85, sizeof(s)));
	
// 	int size = (s + sizeof(s)/sizeof(s[1])) - (int *)ft_memchr(s, 85, sizeof(s));

// 	int *p = ft_memchr(s, 85, sizeof(s));

// 	while (i < size)
// 	{
// 		ft_memset(p + i, 27, 1);
// 		i++;
// 	}

// 	i = 0;
// 	while (i < sizeof(s) / sizeof(s[1]))
// 	{
// 		printf("|%d|", s[i]);
// 		i++;
// 	}
// 	return 0;
// }