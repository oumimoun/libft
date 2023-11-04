/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:56:51 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/02 18:53:18 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char *ft_strrchr(const char *str, int c) {
    char *result = NULL;
    
    while (*str) {
        if (*str == c) {
            result = (char *)str;
        }
        str++;
    }
    
    if (*str == c) {
        result = (char *)str;
    }
    
    return result;
}

int main() {
    const char *str = "Hello, World!";
    char c = '\0';
    char *result = ft_strrchr(str, c);

    if (result != NULL) {
        printf("Found last '%c' at position %ld\n", c, result - str);
    } else {
        printf("'%c' not found in the string.\n", c);
    }

    return 0;
}