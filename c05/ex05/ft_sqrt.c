/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 11:24:58 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/22 10:40:07 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		 return (0);
	if (nb == 1)
		 return (1);
	i = 2;
	if (nb % 2)
		 i = 3;
	while (i <= (nb / i))
	{
		if ((i * i) == nb)
			 return (i);
		i += 2;
	}
	return (0);
}
