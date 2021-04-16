/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alme <sde-alme@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 22:56:56 by sde-alme          #+#    #+#             */
/*   Updated: 2021/04/13 20:54:58 by sde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;		//	int[4] = 1 2 3 4  4 2 3 1   4 3 2 1  4 2 3 1  1 2 3 4
	*b = s;			//	int[4] = 4 3 2 1 
}					//  int[4] = 0 1 2 3 -> n = 4 -1 = 3 

void	ft_rev_int_tab(int *tab, int size)
{
	int count;

	count = 0;
	while (count < size / 2)
	{
		ft_swap(&tab[count], &tab[size - 1 - count]);     // count = 0 - tab[0], tab[ 4 - 1 - 0]
		count++;
	}
}
