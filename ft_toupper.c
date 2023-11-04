/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:20:27 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/02 16:41:43 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int ch) {
    if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 'A';
    } else {
        return ch;
    }
}

int main() {
    char c = 'Z';
    char result = ft_toupper(c);
    printf("%c converted to uppercase is: %c\n", c, result);
    return 0;
}
