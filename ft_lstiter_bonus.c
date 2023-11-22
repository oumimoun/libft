/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:53:56 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/22 19:54:00 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// int main()
// {
//     t_list *node1 = ft_lstnew(strdup("allo"));
//     t_list *node2 = ft_lstnew(strdup("poopo"));
//     t_list *node3 = ft_lstnew(strdup("poopo"));
//     (node1)->next = node2;
//     node2->next = node3;

//     ft_lstiter(node1, del);
//     // printf("%s", node1->content);
// }