#include <unistd.h>
#include<stdlib.h>
#include<stdio.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
    char *dest;
    int	i;

	i = 0;
    dest = malloc(ft_strlen(src) * sizeof(char) + 1);
    if(!dest)
    {
        return NULL;
    }
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
    return(dest);
	
}

int main (void)
{
    char *src = "salutation";
    char *dest = ft_strdup(src);
    printf("%s", dest);
    free(dest);
    return(0);
}