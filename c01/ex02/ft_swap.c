/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelkadi <ayelkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 22:52:01 by ayelkadi          #+#    #+#             */
/*   Updated: 2026/07/28 15:25:17 by ayelkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tpr;

	tpr = *a;
	*a = *b;
	*b = tpr;
}
int main(void)
{
    int i = 1;
    int q = 3;
    ft_swap(&q , &i );
    printf("b : %d, a : %d\n", i, q); 
}