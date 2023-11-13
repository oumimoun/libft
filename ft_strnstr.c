/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:58:22 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/06 11:59:27 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int equal(const char *s1, const char *s2, size_t len)
{
	int i;

	i = 0;
	while (*s1 && *s2 && len)
	{
		if (s1[i] != s2[i])
			return (0);
		s1++;
		s2++;
		len--;
	}
	if (*s2 == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle && equal(haystack, needle, len))
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}

// int main() {
// 	 char haystack[] = "hellooworld";
// 	 char needle[] = "owo";
// 	 size_t len = 10;  // Maximum length to search within haystack

// 	 char *result = ft_strnstr(haystack, needle, len);

// 	 if (result != NULL) {
// 		  printf("Substring found at position: %ld\n", result - haystack);
// 	 } else {
// 		  printf("Substring not found within the specified length.\n");
// 	 }

// 	 return 0;
// }