/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:56:51 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/14 19:23:12 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	c2;
	char	*s;
	char	*result;

	s = (char *)str;
	c2 = (char)c;
	result = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
			result = (char *)(s + i);
		i++;
	}
	if (s[i] == c2)
		result = (char *)(s + i);
	return (result);
}

// int main() {
// 	 const char *str = "Hello, World!";
// 	 char c = '\0';
// 	 char *result = ft_strrchr(str, c);

// 	 if (result != NULL) {
// 		  printf("Found last '%c' at position %ld\n", c, result - str);
// 	 } else {
// 		  printf("'%c' not found in the string.\n", c);
// 	 }

// 	 return 0;
// }