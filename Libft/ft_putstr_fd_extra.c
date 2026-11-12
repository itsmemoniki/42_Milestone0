#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// int	main(void)
// {
// 	char	*str = "hello!";
// 	ft_putstr_fd(str, 1);
// 	write(1, "\n", 1);
// 	return (0);
// }