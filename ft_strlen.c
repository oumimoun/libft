/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:40:31 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/01 18:49:34 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
};

int main(){
    const char *name = "pp";
    int leght = ft_strlen(name);
    printf("%d is your name", leght);
}