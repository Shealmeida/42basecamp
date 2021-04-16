/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sde-alme <sde-alme@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 02:37:13 by sde-alme          #+#    #+#             */
/*   Updated: 2021/04/12 23:24:12 by sde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	int f;

	f = n;
	i = 0;
	while (i < f && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < f)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
