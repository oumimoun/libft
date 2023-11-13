/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:50:18 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/05 17:55:31 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main() {
	 char a;
	 a = '*';
	 if(ft_isalnum(a)){
		  printf("%c is alphanumerique", a);
	 }else
		  printf("%c is not", a);
	 return 0;
}*/