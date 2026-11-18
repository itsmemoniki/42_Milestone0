/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:09:24 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/18 19:09:26 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

// #include <stdio.h>
// void del(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	t_list *node;
// 	char *str = "hello world";
// 	node = ft_lstnew(str);
// 	//test1
// 	printf("before deleting: %s\n", (char *)node->content);
// 	ft_lstdelone(node, del);
// 	printf("after: %s\n", (char *)node->content);
// 	//test2
// 	ft_lstdelone(NULL, del);
// 	ft_lstdelone(node, NULL);
// 	return (0);
// }
