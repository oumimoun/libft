/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:25:00 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/04 10:54:07 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n){
    const unsigned char *p1 = (unsigned char *)s1;
    const unsigned char *p2 = (unsigned char *)s2;
    size_t i = 0;

    while(i < n){
        if (p1[i] != p2[i]){
            return p1[i] - p2[i];
        }
        i++;
    }
    return 0;
}

int main() {
     char str1[] = "Hello, World!";
     char str2[] = "HSllo, World!";
    int result = ft_memcmp(str1, str2, 6);
    printf("Result: %d\n", result);
    if (result < 0) {
        printf("data1 is smaller than data2\n");
    } else if (result > 0) {
        printf("data1 is larger than data2\n");
    } else {
        printf("data1 and data2 are equal\n");
    }
    return 0;
}