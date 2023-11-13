/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:04:31 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/05 18:44:30 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lsrc;
	unsigned int	ldest;

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
/*
int main(){
	 char *dest = "Hello";
	 char *src = "World";
	 int total = ft_strlcat(dest, src, 5);
	 printf("Copied string: %d\n", total);
	 return 0;
}*/