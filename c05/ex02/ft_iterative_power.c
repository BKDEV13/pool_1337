/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:23:58 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/19 10:33:23 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	calc;
	int	result;

	calc = 1;
	result = 1;
	if (power < 0)
		 return (0);
	else if (nb == 0 && power == 0)
		 return (1);
	while (calc <= power)
	{
		result *= nb;
		calc++;
	}
	return (result);
}
