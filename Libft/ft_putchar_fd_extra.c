#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int fd = 2;
// 	ft_putchar_fd('a', fd);
// 	write(1, "\n", 1);
// 	write(fd, "a\n", 2);
// 	return (0);
// }