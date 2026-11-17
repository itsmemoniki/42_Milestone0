#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s1 = "hello";
// 	char *s2 = "world";

// 	t_list *lst = ft_lstnew(s2);
// 	ft_lstadd_front(&lst, ft_lstnew(s1));
// 	printf("%s %s\n", (char *)lst->content, (char *)lst->next->content);
// 	printf("size of list: %u\n", ft_lstsize(lst));
// 	return (0);
// }