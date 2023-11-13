/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:47:57 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/05 17:52:21 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void			*p;

	total = count * size;
	p = malloc(total);
	if (p == NULL)
		return NULL;
	else
		ft_bzero(p, total);
	return (p);
}
/*
int main() {
	 int *p;
	 int i, n;

	 printf("Number of elements to be entered:");
	 scanf("%d",&n);

	 p = (int*)ft_calloc(n, sizeof(int));
	 printf("Enter %d numbers:\n",n);
	 for( i=0 ; i < n ; i++ ) {
		  scanf("%d",&p[i]);
	 }

	 printf("The numbers entered are: ");
	 for( i=0 ; i < n ; i++ ) {
		  printf("%d ",p[i]);
	 }
	 free( p );

	 return 0;
}*/