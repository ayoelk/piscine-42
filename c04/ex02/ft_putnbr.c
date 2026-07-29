/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelkadi <ayelkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:48:00 by ayelkadi          #+#    #+#             */
/*   Updated: 2026/07/22 13:23:40 by ayelkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar( char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1,"-2147483648", 11);
		return;
	}
	if( nb < 0)
	{
		ft_putchar('-');
		nb = - nb ;
	}
	if( nb >= 0 && nb <= 9)
	{
		ft_putchar( nb + 48);
	}
	else
	{
		ft_putnbr( nb / 10);
		ft_putnbr(nb % 10);
	}
}
	

int main()
{
    ft_putnbr(555);
}