#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

// #include <stdio.h>
// // l->next aponta a proxima node;
// // l recebe esse endereço e move pra frente.
// void print_list(t_list *l)
// {
// 	while (l)
// 	{
// 		printf("%d -> ", *(int *)l->content);
// 		l = l->next;
// 	}
// 	printf("NULL\n");
// }
// int main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;
// 	int		a = 10;
// 	int		b = 20;
// 	int		c = 30;
// 	int		d = 5;
// 	//create list
// 	lst = ft_lstnew(&a);
// 	lst->next = ft_lstnew(&b);
// 	lst->next->next = ft_lstnew(&c);
// 	//before
// 	printf("Before ft_lstadd_front:\n");
// 	print_list(lst);
// 	//add new
// 	new = ft_lstnew(&d);
// 	ft_lstadd_front(&lst, new);
// 	//after
// 	printf("\nAfter ft_lstadd_front:\n");
// 	print_list(lst);
// 	return (0);
// }