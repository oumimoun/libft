/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:23:19 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/11 19:03:33 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;
	char	c2;

	i = 0;
	c2 = (char)c;
	s = (char *)str;
	while (s[i] != '\0')
	{
		if (s[i] == c2)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == c2)
		return ((char *)(s + i));
	if (!s[i])
		return (NULL);
	return (NULL);
}

// int main() {
// 	 const char *str = "Hello, World!";
// 	 char c = 'l';
// 	 char *result = ft_strchr(str, c);

// 	 if (result != NULL) {
// 		  printf("Found '%c' at position %ld\n", c, result - str);
// 	 } else {
// 		  printf("'%c' not found in the string.\n", c);
// 	 }

// 	 return 0;
// }