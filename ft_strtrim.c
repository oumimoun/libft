/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:26:15 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/09 19:48:25 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strflag(char const c, char const *set)
{
	int	i;
	int	n;

	n = ft_strlen(set);
	i = 0;
	while (i < n)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	size_toalloc(char const *s1, char const *set)
{
	int	size;
	int	i;
	int	len_s1;

	i = 0;
	len_s1 = ft_strlen(s1);
	size = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		size--;
		i++;
	}
	if (size == 0)
		return (0);
	i = 0;
	while (len_s1 && ft_strchr(set, s1[len_s1 - 1]))
	{
		size--;
		len_s1--;
		i++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*result;

	size = size_toalloc(s1, set);
	i = 0;
	if (!set || !s1)
		return (NULL);
	result = (char *)malloc(size + 1);
	if (!result)
		return (0);
	while (*s1 && strflag(*s1, set))
		s1++;
	ft_strlcpy(result, (char *)s1, size + 1);
	return (result);
}

// int main()
// {
// 	char str[14] = "hello world";
// 	char set[14] = "eh";
// 	char *result = ft_strtrim("ab cd  f    ", " ");
// 	int size = size_toalloc(str, set);
// 	printf("size is: %d\n", size);
// 	printf("result is: %s", result);
// 	free(result);
// 	return 0;
// }