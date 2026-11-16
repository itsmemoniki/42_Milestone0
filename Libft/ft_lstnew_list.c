#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *) malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "hello";
// 	t_list	*node;
// 	node = ft_lstnew(str);
// 	printf("%s\n", (char *)node->content);
// 	return (0);
// }