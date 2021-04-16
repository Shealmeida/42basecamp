/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alme <sde-alme@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 13:32:12 by sde-alme          #+#    #+#             */
/*   Updated: 2021/04/16 04:26:22 by sde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648; //imprimi um número por vez
		
		ft_putnbr(nb);
	}
	else if (nb < 0)
	{
		ft_putchar('-'); //Só imprimi um caracter por isso n pode imprimir -1
		ft_putnbr(nb * -1); //eh um int, n tem na tabela ascii
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0'); //transforma numero inteiro em caracter
}
