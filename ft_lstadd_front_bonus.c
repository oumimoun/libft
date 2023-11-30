/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:49:28 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/28 18:05:02 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
int main()
{
	t_list *lst = NULL;
	t_list *new = ft_lstnew(ft_strdup("hello world"));
	ft_lstadd_front(&lst , new);
	while (lst)
	{
		printf("%s", lst->content);
		lst = lst->next;
	}
}