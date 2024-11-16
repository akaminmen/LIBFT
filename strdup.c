#include <stdio.h>
int     *strdup(char *x)
{       
        char    *new;
        int     i;
        int     size;

	size = 0;
	while (x[size])
		size++;

	*new = malloc(size + 1);

        i = 0;
        while (x[i])
        {
                new[i] = x[i];
                i++;
        }
        new[i] = '\0';
        return (new);
}


int main ()
{
        char prueba[] = "hola mundo";
        printf('%c',strdup(prueba));
}
