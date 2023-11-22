/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:04:31 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/21 17:48:45 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
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
// int main ()
// {
// 	char *str = "test";
// 	*(str + 1) = 'a';
// 	printf("%s", str + 1);
// }