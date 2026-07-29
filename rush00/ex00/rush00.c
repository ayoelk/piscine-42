/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   rush00.c                                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gmilcent <gmilcent@student.42.fr>         #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/12 03:04:59 by gmilcent         #+#    #+#              */
/*   Updated: 2026/07/12 17:56:31 by gmilcent        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	inttochar(int x)
{
	char	c;

	c = x;
	ft_putchar(c);
	return (c);
}

void	drawx(int x, char l, char m, char r)
{
	int	i;

	i = 0;
	ft_putchar(l);
	if (x - 2 > 0)
	{
		while (i < x - 2)
		{
			ft_putchar(m);
			i++;
		}
	}
	if (x > 1)
	{
		ft_putchar(r);
	}
}

void	drawmid(int x, int y, char mid, char side)
{
	int	i;

	i = 0;
	if (x > 1)
	{
		ft_putchar(side);
		while (i < x - 2)
		{
			ft_putchar(mid);
			i++;
		}
	}
	if (x > 0)
	{
		ft_putchar(side);
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	drawx(x, 'o', '-', 'o');
	if (y >= 3)
	{
		while (i < y - 2)
		{
			ft_putchar('\n');
			drawmid(x, y, ' ', '|');
			i++;
		}
	}
	if (y > 1)
	{
		ft_putchar('\n');
		drawx(x, 'o', '-', 'o');
	}
}
