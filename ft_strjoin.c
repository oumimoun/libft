/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:30:58 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/07 15:43:58 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int len;
    char *result;
    i = 0;
    j = ft_strlen(s1);
    len = ft_strlen(s2) + j;
    result = (char *)malloc((len + 1) * sizeof(char));
    if (!result)
        return  (0);
    while (s1[i])
    {
        result[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        result[j + i] = s2[i];
        i++;
    }
    result[i + j] = '\0';
    return (result);
}
// int main()
// {
//     char str1[8] = "oussama";
//     char str2[2] = "pp";
//     char *result = ft_strjoin("oussama", "pp");
//     printf("result is: %s", result);
// }

