/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alme <sde-alme@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:25:26 by sde-alme          #+#    #+#             */
/*   Updated: 2021/04/14 19:32:16 by sde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				a;
	int				b;
	unsigned int	i;

	a = 0;
	b = 0;
	i = 0;
	if (nb == 0)
		return (dest);
	else
	{
		while (dest[a] != '\0')
		{
			a++;
		}
		while (i <= (nb - 1) && src[b] != '\0')
		{
			dest[a + b] = src[b];
			b++;
			i++;
		}
		dest[a + b] = '\0';
		return (dest);
	}
}
