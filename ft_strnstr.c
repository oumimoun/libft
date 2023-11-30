/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:58:22 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/25 19:02:34 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	equal(const char *s1, const char *s2, size_t len)
{
	int	i;

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
	if (!haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len)
	{
		if (*haystack == *needle && equal(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
