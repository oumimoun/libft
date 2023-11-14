/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:22:27 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/14 19:11:21 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s) || !len || !s)
		return (ft_strdup(""));
	if (len + start > (unsigned int)ft_strlen(s))
		len = (unsigned int)ft_strlen(s) - start;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}

// int main()
// {
//     // char str[] = "ouss";
//     // unsigned int c = 1;
//     char *result = ft_substr("hola", 2, 30);
//     printf("|%s|", result);
// 	free(result);
// }