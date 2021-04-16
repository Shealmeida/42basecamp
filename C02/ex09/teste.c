char *ft_strcapitalize(char *str)
{

	while (*str != '\0')
	{
		if (*(str - 1) == ' ' && (*str <= 'z' && *str >= 'a'))
			*str -= 32;
		else if (!(*(str - 1) == ' ') && (*str >= 'A' && *str <= 'Z'))
			*str += 32;
	str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str) // Ot
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i - 1];
		if (65 <= str[i] && str[i] <= 90) // Se minha letra esta entre A e Z
			str[i] = str[i] + 32; // minha letra recebe + 32, se tornando uma letra minúscula - DEIXOU TUDO MINÚSCULO
		if (i == 0 || (c >= 32 && c <= 47) || (c >= 58 && c <= 64) || // se meu contador for igual a 0 ou se minha posicao - 1 e o valor for de ' ' até / ou meu valor for de : até @
			(c >= 91 && c <= 96) || (c >= 123 && c <= 126)) // ou de [ até ` ou { até 126 (~) - ok
			if ((65 <= str[i] && str[i] <= 90) || // se minha letra for entre A e Z ou
			(97 <= str[i] && str[i] <= 122)) // se minha letra for entre a e z
				str[i] = str[i] - 32; // posicao recebe a posicao - 32;
		i++;
	}
	return (str);
}


char	*ft_strcapitalize(char *str) //She
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i - 1];
		if (65 <= str[i] && str[i] <= 90) // Se minha letra esta entre A e Z
			str[i] = str[i] + 32; // minha letra recebe + 32, se tornando uma letra minúscula - DEIXOU TUDO MINÚSCULO
		if (i == 0 || (c >= 32 && c <= 47) || (c >= 58 && c <= 64) || // se meu contador for igual a 0 ou se minha posicao - 1 e o valor for de ' ' até / ou meu valor for de : até @
			(c >= 91 && c <= 96) || (c >= 123 && c <= 126)) // ou de [ até ` ou { até 126 (~) - ok
			if (97 <= str[i] && str[i] <= 122) // se minha letra for entre a e z
				str[i] = str[i] - 32; // posicao recebe a posicao - 32;
		i++;
	}
	return (str);
}
