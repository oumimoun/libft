/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:02:33 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/01 18:05:28 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int ft_isascii(int c) {
    return (c >= 0 && c <= 127);
}

int main() {
    char testChars[] = { 'w', '7', '$', '\n', 'j' };
    int numTestChars = sizeof(testChars) / sizeof(testChars[0]);

    for (int i = 0; i < numTestChars; i++) {
        char ch = testChars[i];
        int result = ft_isascii(ch);

        if (result) {
            printf("'%c' is within the standard 7-bit ASCII character set.\n", ch);
        } else {
            printf("'%c' is not within the standard 7-bit ASCII character set.\n", ch);
        }
    }

    return 0;
}