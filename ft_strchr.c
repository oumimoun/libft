/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:23:19 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/03 11:54:57 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

char *ft_strchr(const char *str, int c){
    while(*str){
        if(*str == c)
            return (char *)str;
        str++;
    }
    return NULL;
}

int main() {
    const char *str = "Hello, World!";
    char c = 'l';
    char *result = ft_strchr(str, c);

    if (result != NULL) {
        printf("Found '%c' at position %ld\n", c, result - str);
    } else {
        printf("'%c' not found in the string.\n", c);
    }

    return 0;
}