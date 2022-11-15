/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 15:41:29 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/25 16:38:28 by bkaztaou         ###   ########.fr       */
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

char	*reserve_space(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*join;
	char	*st;

	i = 0;
	count = 0;
	st = (char *)malloc(sizeof(char));
	st[0] = '\0';
	if (size == 0)
		 return (st);
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count += (size - 1) * ft_strlen(sep);
	join = (char *)malloc(sizeof(char) * (count + 1));
	if (!join)
		 return (st);
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	 int	i;
	 int	j;
	 int	k;
	 char	*join;

	i = 0;
	k = 0;
	join = reserve_space(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			join[k++] = strs[i][j++];
		}
		if (i < (size - 1))
		{
			j = 0;
			while (sep[j])
				join[k++] = sep[j++];
		}
		i++;
	}
	join[k] = 0;
	return (join);
}
