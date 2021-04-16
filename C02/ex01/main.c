#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char *src;
	char *dest;
	unsigned int n;  //só recebe positivo
	n = 4;

	src = calloc(11, sizeof(char));
	src = "0123456789";
	dest = calloc(11, sizeof(char));
	ft_strncpy(dest, src, n);	
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}