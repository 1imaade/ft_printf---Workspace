#include "ft_printf.h"

void	ft_putstr(char *s)
{
	int	i;

	if (!s)
	{
		ft_putstr("(null)");
		return;
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}
