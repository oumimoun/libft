/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:52:52 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/07 12:12:01 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)malloc(ft_strlen(str) + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
int main(){
	 char *str = "Hello, World! ioipoib oiyuiouy";
	 char *dup = ft_strdup(str);
	 printf("%s\n", dup);
	 free(dup);
	 return 0;
}*/