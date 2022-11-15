/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 10:34:52 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/19 13:40:56 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if ((nb == 0 && power == 0) || power == 0)
		 return (1);
	result = nb * ft_recursive_power(nb, (power - 1));
	return (result);
}
