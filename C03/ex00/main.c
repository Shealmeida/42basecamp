#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2);

int main ()
{
    char a[]="Sheila";
    char b[]="Sheila";
    char c[]="Shelia";
    char d[]="She";
    char e[]="She";

    printf("ft_strcmp: %d | srtcmp: %d\n", ft_strcmp(a, b), strcmp(a,b));
    printf("ft_strcmp: %d | srtcmp: %d\n", ft_strcmp(a, c), strcmp(a,c));
    printf("ft_strcmp: %d | srtcmp: %d\n", ft_strcmp(d, a), strcmp(d,a));
    printf("ft_strcmp: %d | srtcmp: %d\n", ft_strcmp(a, e), strcmp(a,e));


}