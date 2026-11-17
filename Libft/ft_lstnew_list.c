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
// int main(int argc, char *argv[])
// {
// 	(void)argc;

// 	t_list	*node;
// 	node = ft_lstnew(argv[1]);
// 	printf("%s.\n", (char *)node->content);
// 	return (0);
// }