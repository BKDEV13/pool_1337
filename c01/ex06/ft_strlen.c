/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:57:32 by bkaztaou          #+#    #+#             */
/*   Updated: 2021/08/09 16:19:51 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
} */
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/* int	main(void)
{
	int index = ft_strlen("Hello Nors and welcome!");

		ft_putchar((index / 10) + '0');
		ft_putchar((index % 10) + '0');
	return (0);
}*/
