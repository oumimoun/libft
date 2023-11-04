/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:53:53 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/02 11:28:44 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_bzero(void *s, size_t n){
    char *byte_s = (char *)s;
    size_t i = 0;
    while(i < n){
        *byte_s = '0';
        i++;
        byte_s++;
    }
}

int main() {
    char buffer[50] = "GeeksForGeeks is for programming geeks.";
    ft_bzero(buffer + 13, 8);

    printf("Buffer contents: %s\n", buffer);

    return 0;
}