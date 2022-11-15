/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:20:25 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/09 17:11:33 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	swap;

	count = 0;
	while (count < size)
	{
		swap = tab[size - 1];
		tab[size - 1] = tab[count];
		tab[count] = swap;
		size--;
		count++;
	}
}
