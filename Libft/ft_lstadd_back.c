/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:08:27 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/25 16:18:41 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (lst != NULL && new != NULL)
	{
		if (!*lst)
			*lst = new;
		else
		{
			end = ft_lstlast(*lst);
			end->next = new;
		}
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s1 = "hii";
// 	char *s2 = "hello";
// 	char *s3 = "world";
// 	t_list *lst;
// 	lst = ft_lstnew(s2);
// 	ft_lstadd_front(&lst, ft_lstnew(s1));
// 	ft_lstadd_back(&lst, ft_lstnew(s3));
// 	printf("%s %s %s\n", (char *)lst->content, (char *)lst->next->content, 
// 						(char *)lst->next->next->content);
// 	return (0);
// }
