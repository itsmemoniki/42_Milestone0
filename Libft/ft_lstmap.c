/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:10:54 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/19 17:26:36 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnode;
	void	*newcontent;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newcontent = f(lst->content);
		newnode = ft_lstnew(newcontent);
		if (!newnode)
		{
			del(newcontent);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnode);
		lst = lst->next;
	}
	return (newlst);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str1 = "AB";
// 	char *str2 = "CD";
// 	char *str3 = "EF";
// 	t_list *lst = ft_lstnew(str1);
// 	ft_lstadd_back(&lst, ft_lstnew(str2));
// 	printf("%s %s\n", (char *)lst->content, (char *)lst->next->content);
// 	return (0);
// }
