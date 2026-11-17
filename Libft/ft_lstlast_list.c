#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s1 = "hello";
// 	char *s2 = "world";
// 	char *s3 = "hiii";
// 	t_list *lst;

// 	lst = ft_lstnew(s2);
// 	ft_lstadd_front(&lst, ft_lstnew(s1));
// 	ft_lstadd_front(&lst, ft_lstnew(s3)),
// 	printf("%s %s\n", (char *)lst->content, (char *)lst->next->content);
// 	lst = ft_lstlast(lst);
// 	printf("content of lst: %s\n", (char *)lst->content);
// 	return (0);
// }