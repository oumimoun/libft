/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:30:15 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/02 15:30:10 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n){
    char *byte_dest = (char *)dest;
    char *byte_src = (char *)src;
    size_t i = 0;
    while(i <= n){
        *byte_dest = *byte_src;
        byte_dest++;
        byte_src++;
        i++;
    }
    return byte_dest;
}

int main() {
    char src[] = "This is a test.";
    char dest[16];
    ft_memcpy(dest ,src , sizeof(src));

    printf("dest contents: %s\n", dest);

    return 0;
}
