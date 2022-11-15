/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 06:11:15 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/18 06:32:20 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		 return (1);
	return (0);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		 return (1);
	return (0);
}

int	is_lower(char	c)
{
	if (c >= 'a' && c <= 'z')
		 return (1);
	return (0);
}

char	*to_lower_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			 str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	*lstr;

	i = 0;
	lstr = to_lower_str(str);
	while (lstr[i])
	{
		if (!(is_digit(str[i - 1]))
			&& !(is_upper(str[i - 1]))
			&& !(is_lower(str[i - 1])))
		{
			if (is_lower(str[i]))
				 str[i] -= 32;
		}
		i++;
	}
	return (str);
}
