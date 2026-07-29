#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int *ft_range(int min, int max)
{
    int i;
    int *tab;

    i = 0;
    if( min > max)
    {
        return(NULL);
    }
    tab = malloc((max - min)* sizeof(int));
    while( i < (max - min) )
    {
        tab[i] = min + i;
        i++;
    }
    return(tab);
}

int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*tab;

	tab = 0;
	min = 0;
	max = 40;
	tab = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	tab = 0;
	return (0);
}