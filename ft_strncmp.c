#include <stdio.h>
int ft_strncmp(char *x,char *y, int n)
{
    int i;
    i = 0;
    int dif;
    dif = 0;
    while ((dif == 0)&&(i <= n)&&(x[i]!='\0'))
    {
        dif = x[i] - y[i];
        i++;
    }
    return(dif);
}

int main ()
{
    char *s1 = "Hello";
    char *s2 = "Hello";
    printf("%i\n", ft_strncmp(s1, s2, 3));
}