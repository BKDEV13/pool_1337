/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:42:47 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/19 14:20:31 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		 return (-1);
	else if (index == 0)
		 return (0);
	else if (index == 1)
		 return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
