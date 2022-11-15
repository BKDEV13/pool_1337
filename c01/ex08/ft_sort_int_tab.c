/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:23:11 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/10 10:29:38 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
			{
				min = j;
			}
			swap = tab[i];
			tab[i] = tab[min];
			tab[min] = swap;
			j++;
		}
		i++;
	}
}
/* int	main(void)
{
	int	nums[5] = {2, 9, 1, 5, 4};
	int	i;

	i = 0;
	ft_sort_int_tab(nums, 5);
	while (i < 5)
	{
		printf("%d", nums[i]);
		i++;
	}
	return (0);
} */
