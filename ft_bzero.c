#include <stdio.h>
void ft_bzero(void *s,  size_t n)
{
    char *a = s;
    while(n--)
    {
        *a =  '\0';
    }
    return s;
}