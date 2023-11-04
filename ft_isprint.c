/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:26:24 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/01 18:32:24 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isprint(int ch){
    return (ch >= 32 && ch <= 126);
};

int main() {
    char ch = '4';

    if (ft_isprint(ch)) {
        printf("%c is a printable character.\n", ch);
    } else {
        printf("%c is not a printable character.\n", ch);
    }

    return 0;
}