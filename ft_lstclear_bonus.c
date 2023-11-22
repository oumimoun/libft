/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumimoun <oumimoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:53:05 by oumimoun          #+#    #+#             */
/*   Updated: 2023/11/22 19:53:18 by oumimoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*current;

	if (lst && del)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}

// int main()
// {
//     t_list *node1 = ft_lstnew(strdup("allo"));
//     t_list *node2 = ft_lstnew(strdup("poopo"));
//     t_list *node3 = ft_lstnew(strdup("poopo"));
//     (node1)->next = node2;
//     node2->next = node3;

//     ft_lstclear(&node1, del);
//     // printf("%s", node1->content);
// }