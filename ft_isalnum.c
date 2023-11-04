/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:50:18 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/01 18:01:37 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isalnum(int c){
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c<= 'z')||(c >= '0' && c <= '9'));
}

int main() {
    char a;
    a = '*';
    if(ft_isalnum(a)){
        printf("%c is alphanumerique", a);
    }else
        printf("%c is not", a);
    return 0;
}