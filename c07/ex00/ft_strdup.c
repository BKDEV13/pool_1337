/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:38:22 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/26 06:59:11 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		 i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		str_len;
	char	*range;

	i = 0;
	str_len = ft_strlen(str);
	range = (char *)malloc(sizeof(char) * str_len);
	while (str[i])
	{
		range[i] = str[i];
		i++;
	}
	range[i] = 0;
	return (range);
}
