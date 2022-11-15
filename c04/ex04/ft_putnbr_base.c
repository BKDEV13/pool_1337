/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:58:41 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/23 16:44:26 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		 i++;
	return (i);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;
	int	base_len;

	i = 0;
	base_len = ft_strlen(base);
	if (base_len < 2)
		 return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_match(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (ft_base_check(base))
	{
		while (base[i])
		{
			j = i + 1;
			while (base[j])
			{
				if (base[i] == base[j])
					 return (0);
				j++;
			}
			i++;
		}
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int				i;
	unsigned int				bs;
	unsigned int	numb;

	i = 0;
	bs = ft_check_match(base);
	if (bs == 0)
		 return ;
	if (nbr < 0)
	{
		numb = (unsigned int)(nbr * -1);
		ft_putchar('-');
		if (numb >= bs)
			ft_putnbr_base((numb / bs), base);
		ft_putchar(base[numb % bs]);
	}
	else if (nbr >= bs)
	{
		ft_putnbr_base((nbr / bs), base);
		ft_putchar(base[nbr % bs]);
	}
	else
		ft_putchar(base[nbr]);
}
