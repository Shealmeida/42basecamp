/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alme <sde-alme@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 02:44:45 by sde-alme          #+#    #+#             */
/*   Updated: 2021/04/11 22:50:12 by sde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
			str++;
		else if (*str == ' ')
			str++;
		else
			return (0);
	}
	return (1);
}


int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122) || *str == ' ')
			str++;
		else
			return (0);
	}
	return (1);
}
