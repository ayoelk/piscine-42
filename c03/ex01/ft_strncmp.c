/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelkadi <ayelkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 17:24:28 by ayelkadi          #+#    #+#             */
/*   Updated: 2026/07/21 14:08:50 by ayelkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && (s2[i] == s1[i] && s1[i] != 0))
		i++;
	return (s1[i] - s2[i]);
}

int main(void)
{
	char *s1 = "bonjour";
	char *s2 = "Bonjour";
	unsigned int n = 0;

	printf("%d\n", ft_strncmp(s1 , s2, n));
	printf("%d\n", strncmp(s1 , s2, n));

	return(0);
}
