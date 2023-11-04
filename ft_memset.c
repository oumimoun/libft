/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:59:10 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/01 21:52:17 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *ptr, int value, size_t num) {
    char *byte_ptr = (char *)ptr;
    size_t i = 0;
    while(i < num){
        *byte_ptr = (char)value;
        i++;
        byte_ptr++;
    }
    return byte_ptr;
}

int main() {
    char buffer[50] = "GeeksForGeeks is for programming geeks.";
    ft_memset(buffer + 13, '.', 8);

    printf("Buffer contents: %s\n", buffer);

    return 0;
}
