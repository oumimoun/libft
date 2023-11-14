/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:52:28 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/14 19:19:10 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && (str[i] == c))
			i++;
		if (str[i])
			count++;
		while (str[i] != '\0' && (str[i] != c))
			i++;
	}
	return (count);
}

static int	len_str(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	*ft_allocated_str(char *str, char c)
{
	char	*result;
	int		len_string;

	len_string = len_str(str, c);
	result = (char *)malloc((len_string + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len_string] = '\0';
	while (len_string--)
		result[len_string] = str[len_string];
	return (result);
}

static void	ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char **ft_split(char const *s, char c)
{
	int		i;
	char	*str;
	char	*head;
	char	**result;

	str = ft_strdup(s);
	if (!s || !str)
		return (NULL);
	head = str;
	result = (char **)malloc((count_str(str, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && (*str == c))
			str++;
		if (*str)
		{
			result[i] = ft_allocated_str(str, c);
			if (!result[i])
				return (ft_free(result), NULL);
			i++;
		}
		while (*str && (*str != c))
			str++;
	}
	result[i] = NULL;
	free(head);
	return (result);
}

// int main()
// {
//    //  char *str = "hello!";

//     char **string = ft_split("xxxxxxxxhello!", 'x');
//     // int numStrings = sizeof(string) / sizeof(string[0]);
//     int i = 0;

//     while (string[i])
//     {
//         printf("|%s|\n", string[i]);
//         i++;
//     }

//     return 0;
// }