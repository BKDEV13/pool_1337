/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 07:57:34 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/18 06:06:48 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	 write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
		}
		else
		{
			ft_putchar('-');
			nb *= -1;
		}
	}
	if (nb >= 0 && nb <= 9)
	{
		 ft_putchar (nb + '0');
	}
	if (nb > 9)
	{
		 ft_putnbr (nb / 10);
		 ft_putchar (nb % 10 + '0');
	}
}
