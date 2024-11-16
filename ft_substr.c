#include <stdio.h>
char *ft_substr(char const *s, unsigned int start,size_t len)
{
	int i;
	i = 0;

	start = malloc (len + 1);
	while (i < len)
	{
		s[i] = start[i];
		i++;
	}

	start[i] = '\0';
	return (start);
}

int main ()
{
	char prueba[] = "texto a copiar";
	char copia[] = ft_substr(prueba, copia, 5);
	printf("%s",copia);
}
