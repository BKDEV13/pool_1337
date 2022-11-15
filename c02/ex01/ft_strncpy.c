/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:39:07 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/12 18:24:15 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (i < n)
	{
		if (src[count] != '\0')
		{
			dest[count] = src[count];
			count++;
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
