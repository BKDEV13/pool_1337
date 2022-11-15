/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:34:43 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/09 15:44:14 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *a / *b;
	*b = swap % *b;
}
/* int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d; and mod = %d", a, b);
	return (0);
} */
