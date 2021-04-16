#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}
int main(void)
{
	char *ptr = "teste";
	ft_putstr(ptr);
	return (0);
}