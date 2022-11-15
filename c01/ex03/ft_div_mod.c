/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:23:57 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/09 15:33:08 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* int	main(void)
{
	int div;
	int mod;

	ft_div_mod(15, 5, &div, &mod);
	printf("div = %d; and mod = %d\n", div, mod);
	return (0);
} */
