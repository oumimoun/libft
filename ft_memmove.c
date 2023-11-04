/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:21:08 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/02 15:36:39 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t len){
    char *byte_dest = (char *)dest;
    char *byte_src = (char *)src;

    if (byte_dest == byte_src) {
        return byte_src;
    }

    if (byte_src < byte_dest && byte_src + len > byte_dest) {
        size_t i = len;
        while(i > 0){
            byte_dest[i - 1] = byte_src[i - 1];
            i--;
        }
    } else {
        size_t i = 0;
        while(i < len){
            byte_dest[i] = byte_src[i];
            i++;
        }
    }
    return byte_dest;
}

int main() {
    char str[] = "Hello, World!";
    char buffer[16];

    ft_memmove(buffer, str, 5);

    printf("Copied string: %s\n", buffer);

    return 0;
}