/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:43:30 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/23 15:41:00 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_valeur_absolue(int nb)
{
	if (nb < 0)
		 return (nb * -1);
	return (nb);
}

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	i;
	int	*p;
	int	space;

	if (min >= max)
	{
		 *range = 0;
		 return (0);
	}
	i = 0;
	space = ft_valeur_absolue(max - min);
	p = (int *)malloc(sizeof(int) * space);
	if (!p)
		 return (-1);
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	*range = p;
	return (space);
}
