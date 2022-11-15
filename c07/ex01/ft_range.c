/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:04:20 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/26 07:00:36 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_absolute_val(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*p;

	if (min >= max)
		 return (0);
	i = 0;
	range = ft_absolute_val(max - min);
	p = (int *)malloc(sizeof(int) * range);
	while (min < max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
