/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:08:33 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/18 13:50:58 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	base_len;
	int	i;

	base_len = ft_strlen(base);
	i = 0;
	if (base_len < 2)
		 return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+'
			|| (base[i] >= '\t' && base[i] <= '\r')
			|| base[i] == ' ')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_match(char *base)
{
	int	i;
	int	j;

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

int	find_index(char rm, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (rm == base[i])
			 return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	bs;
	int	nbr;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	nbr = 0;
	bs = ft_check_match(base);
	if (bs == 0)
		return (0);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (find_index(str[i], base) >= 0)
	{
		nbr = (nbr * bs) + find_index(str[i], base);
		i++;
	}
	return (nbr * sign);
}
