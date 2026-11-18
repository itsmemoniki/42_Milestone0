#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*nextnode;

	if (lst && del)
	{
		node = *lst;
		while (node)
		{
			nextnode = node->next;
			ft_lstdelone(node, del);
			node = nextnode;
		}
		*lst = NULL;
	}
}

// #include <stdio.h>
// void del(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	test1
// 	char *s1 = "hello";
// 	char *s2 = "world";
// 	t_list	*lst = ft_lstnew(s1);
// 	ft_lstadd_back(&lst, ft_lstnew(s2));
// 	printf("Before deletion: %s %s\n", (char *)lst->content, (char *)lst->next->content);
// 	test2
// 	t_list	*lst = NULL;
// 	ft_lstclear(&lst, del);
// 	com null pointer
// 	if (lst == NULL)
// 		printf("DONE list was cleared\n");
// 	else
// 		printf("ERROR list not cleared\n");
// 	ft_lstclear(NULL, NULL);
// 	return (0);
// }