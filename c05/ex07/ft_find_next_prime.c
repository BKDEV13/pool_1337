/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 10:02:01 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/22 10:20:15 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb < 2)
		 return (0);
	if (nb % 2 == 0 && nb != 2)
		 return (0);
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			 return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		 return (nb);
	return (ft_find_next_prime(nb + 1));
}
