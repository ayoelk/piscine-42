/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelkadi <ayelkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 10:42:21 by ayelkadi          #+#    #+#             */
/*   Updated: 2026/07/08 18:07:16 by ayelkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c ;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
	return ;
}

// int main(void)
// {
//     ft_print_alphabet();
//     return (0);
// }