/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:58:22 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/04 12:08:30 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strnstr(const char *haystack, const char *needle, size_t len){

    size_t i = 0;
    size_t j = 0;
    size_t needle_len = ft_strlen(needle);

    if (needle_len == 0) {
        return (char *)haystack;
    }
    if (len < needle_len) {
        return NULL;
    }
    while (haystack[i] != '\0' && i < len) {
        if (haystack[i] == needle[j] && j < needle_len)
            j++;
        else
            j = 0;
        i++;
        if (j == needle_len)
            return (char *)(haystack + i - needle_len);
    }
    return NULL;
}

int main() {
    char haystack[] = "This is a sample string for testing.";
    char needle[] = "sample";
    size_t len = 7;  // Maximum length to search within haystack

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - haystack);
    } else {
        printf("Substring not found within the specified length.\n");
    }

    return 0;
}