/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthor <jthor@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 14:38:06 by jthor             #+#    #+#             */
/*   Updated: 2021/08/22 20:16:13 by jthor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printLine(char first, char cBetween, int nBetween, char last);

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	counter;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	else
	{
		counter = 0;
		ft_printLine('A', 'B', x - 2, 'C');
		while (counter < (y - 2))
		{
			ft_printLine('B', ' ', x - 2, 'B');
			++counter;
		}
		if (y != 1)
		{
			ft_printLine('C', 'B', x - 2, 'A');
		}
	}
}

void	ft_printLine(char first, char cBetween, int nBetween, char last)
{
	int	counter;

	counter = 0;
	ft_putchar(first);
	while (counter < nBetween)
	{
		ft_putchar(cBetween);
		++counter;
	}
	if (nBetween >= 0)
	{
		ft_putchar(last);
	}
	write(1, "\n", 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
