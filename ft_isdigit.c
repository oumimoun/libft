/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 20:27:09 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/01 17:47:44 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isdigit(int c){
    return (c >= '0' && c <= '9');
};

int main() {
    char    myChar = '0';

    if (ft_isdigit(myChar)) {
        printf("%c is a digit.\n", myChar);
    } else {
        printf("%c is not a digit.\n", myChar);
    }

    return 0;
}