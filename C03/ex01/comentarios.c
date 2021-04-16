int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	a;
	unsigned char	b;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while (i < (n - 1) && (s1[i] == s2[i]) && s1[i] != '\0') // 1 2 3 4 e o comp conta 0 1 2 3
		{
			i++;
		}
		a = s1[i];
		b = s2[i];
		return (a - b);
	}
}
