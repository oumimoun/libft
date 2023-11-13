/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:22:27 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/11 19:04:56 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || start >= UINT32_MAX)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	if (len >= SIZE_MAX)
	{
		result = malloc(ft_strlen(s) + 1);
		ft_memcpy(result, s + start, ft_strlen(s));
		result[ft_strlen(s)] = '\0';
		return (result);
	}
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}

// int main()
// {
//     const char *str = "ouss";
//     unsigned int c = 1;
//     char *result = ft_substr("hola", 4294967295, 18446744073709551615);
//     printf("result is %s", result);
// }