/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:43:39 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/05 19:19:33 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch - 'A' + 'a');
	return (ch);
}

/*
int main() {
	 char c = 'Z';
	 char result = ft_tolower(c);
	 printf("%c converted to lowercase is: %c\n", c, result);
	 return 0;
}
*/