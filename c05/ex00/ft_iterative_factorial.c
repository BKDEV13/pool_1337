/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 08:11:23 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/24 09:17:30 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		 return (0);
	else if (nb == 0)
		 return (1);
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
