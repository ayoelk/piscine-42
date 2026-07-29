/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelkadi <ayelkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 23:01:37 by ayelkadi          #+#    #+#             */
/*   Updated: 2026/07/28 15:27:34 by ayelkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main(void)
{
    int a = 100;
    int b = 10;

    int mod;
    int div;

    ft_div_mod(a, b, &div, &mod);
    printf("div:%d, mod:%d\n", div, mod);
}
