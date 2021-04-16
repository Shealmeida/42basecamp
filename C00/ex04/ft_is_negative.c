/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alme <sde-alme@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 19:44:48 by sde-alme          #+#    #+#             */
/*   Updated: 2021/04/06 01:44:11 by sde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	i;

	if (n >= 0)
	{
		i = 'P';
	}
	else if (n < 0)
	{
		i = 'N';
	}
	write(1, &i, 1);
}
