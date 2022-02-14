#include <unistd.h>

void	ft_printline(char first, char mid, int nmid, char last);

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	ft_printline('/', '*', x - 2, '\\');
	while (i < y)
	{
		ft_printline('*', ' ', x - 2, '*');
		i++;
	}
	if (y > 1)
		ft_printline('\\', '*', x - 2, '/');
}

void	ft_printline(char first, char mid, int nmid, char last)
{
	int	i;

	i = 0;
	ft_putchar(first);
	while (i < nmid)
	{
		ft_putchar(mid);
		i++;
	}
	if (nmid >= 0)
		ft_putchar(last);
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
