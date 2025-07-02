#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char  *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}


char *ft_dup(char *str)
{
    char *dest = malloc(sizeof(char) * ft_strlen(str) + 1);

    int i = 0;
    while (str[i] != '\0')
    {
        dest[i] = str[i];
        i++;
    }    
    return dest;
}

int main(void)
{
    char str[]= "abcd";
    printf("%s", ft_dup(str));
}
