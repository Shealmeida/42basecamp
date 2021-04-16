/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alme <sde-alme@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 02:08:52 by sde-alme          #+#    #+#             */
/*   Updated: 2021/04/10 15:07:39 by sde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	swap;

	count = 0;
	while (count < size)
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count + 1];
			tab[count + 1] = tab[count];
			tab[count] = swap;
			count = 0;
		}
		else
			count++;
	}
}
