#include <stdio.h>
char *ft_strnstr(char *x, char *y, int len)
{
    int i;
    i = 0;
    int j;
    while(x[i] != '\0' &&  i <= len)
    {
        j = 0;
        if (x[i] == y[j])
        {
            
            while (x[i + j] != '\0' &&  x[i + j] == y[j] && i + j <= len)
            {
                if(y[j + 1]  == '\0'){
                    return(x + i);
                }
                j++;
            }
            
            return (x + i);
        }
        i++;
    }
    return 0;
}

int  main()
{
    char *str = "Hello, World!";
    char *substr = "World";
    printf("%d\n", ft_strnstr(str, substr, 2));
}