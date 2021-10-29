#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr("-2");
			ft_putnbr(147483648);
		}
		else
		{
			ft_putchar('-');
			ft_putnbr(-n);
		}
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar(n % 10 + '0');
	}
}
