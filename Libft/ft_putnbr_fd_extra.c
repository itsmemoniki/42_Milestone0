#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = (long)n;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', fd);
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		ft_putchar_fd(c, fd);
		return ;
	}
	ft_putnbr_fd(nbr / 10, fd);
	ft_putnbr_fd(nbr % 10, fd);
}

// int	main(void)
// {
// 	int n = -2147483648;
// 	int fd = 1;
// 	ft_putnbr_fd(n, fd);
// 	write(1, "\n", 1);
// 	return (0);
// }