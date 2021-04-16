#include <stdio.h>

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}
int    main(void)
{
    char *str = "main";
    printf("%d", ft_strlen(str));
}