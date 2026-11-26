/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msouza-c <msouza-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 19:07:19 by msouza-c          #+#    #+#             */
/*   Updated: 2026/11/25 16:08:46 by msouza-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
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
