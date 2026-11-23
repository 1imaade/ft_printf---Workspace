#include "ft_printf.h"

void	ft_putnbr(int n)
{
	long int	nb;
	char		number;

	nb = n;
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb / 10 > 0)
	{
		ft_putnbr(nb / 10);
	}
	number = nb % 10 + '0';
	ft_putchar(number);
}
