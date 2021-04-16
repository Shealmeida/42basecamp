#include <stdio.h>
#include <stdlib.h>

int        ft_str_is_numeric(char *str);

int        main(void)
{ 
    char *str;
	char *str2 = "sdhcsu";
	char *str3 = "098765";
	char *str4 = "09hsjsdh8765";
	char *str5 = " ";
    str = calloc(1, sizeof(char));

    printf("str returns: %d\n", ft_str_is_numeric(str));
	printf("str2 returns: %d\n", ft_str_is_numeric(str2));
	printf("str3 returns: %d\n", ft_str_is_numeric(str3));
	printf("str4 returns: %d\n", ft_str_is_numeric(str4));
	printf("str5 returns: %d\n", ft_str_is_numeric(str5));
    return (0);
}
