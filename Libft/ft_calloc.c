#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	
	ptr = (void *)malloc(n * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n);
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	int n = 5;
// 	int *ptr = calloc(n, sizeof(int));
// 	int i = 0;

//     if (ptr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     while (i < n) 
// 	{
//         printf("%d ", ptr[i]);
// 		i++;
//     }
// 	printf("\n");
//     free(ptr);
// 	return (0);
// }