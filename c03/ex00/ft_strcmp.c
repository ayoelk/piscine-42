/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelkadi <ayelkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 16:21:48 by ayelkadi          #+#    #+#             */
/*   Updated: 2026/07/21 14:05:37 by ayelkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] == s1[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int main(void)
{
	char *s1 = "a";
	char *s2 = "A";

	printf("%d\n", ft_strcmp(s1 , s2));
	return(0);
}