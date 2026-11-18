#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

// #include <stdio.h>
// void printstr(void *str)
// {
// 	char *str1;
	
// 	str1 = (char *)str;
// 	while(*str1)
// 	{
// 		printf("%c", *str1);
// 		str1++;
// 	}
// 	printf("\n");
// }
// int main(void)
// {
// 	char s1[] = "hello";
// 	char s2[] = "world";
// 	t_list *lst = ft_lstnew(s2);
// 	ft_lstadd_front(&lst, ft_lstnew(s1));
// 	ft_lstiter(lst, printstr);
// 	return (0);
// }