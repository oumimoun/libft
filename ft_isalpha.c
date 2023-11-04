/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:32:12 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/01 17:38:57 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(int c){
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z'));
}

int main() {
    char a;
    a = 'Z';
    if(ft_isalpha(a)){
        printf("%c is alpha", a);
    }else
        printf("%c is not", a);
    return 0;
}