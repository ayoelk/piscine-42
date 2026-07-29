#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;

    i = 0;
    if(min >= max)
    {
        *range = NULL;
		return(0);
    }
    *range = malloc((max - min) * sizeof(int));
    while( i < max - min)
    {
        (*range)[i] = min + i;
        i++;
    }
    return(max - min);
}

int	main(void)
{
	int	min;
	int	max;
	int	size;
	int *range;

	min = 0;
	max = 40;
	size = ft_ultimate_range(&range, min, max);
	printf("%d\n", size);
	free(range);
	range = 0;
	return (0);
}