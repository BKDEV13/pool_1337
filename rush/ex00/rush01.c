/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:13:46 by ajemraou          #+#    #+#             */
/*   Updated: 2021/08/10 17:25:14 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_check(int cl, int ln, int cl_c, int ln_c)
{	
	if (cl_c == 1 && ln_c == 1)
	{
		ft_putchar('/');
	}
	else if ((cl_c == cl && cl_c > 1) && (ln_c == ln && ln_c > 1))
	{
		ft_putchar('/');
	}
	else if ((cl_c == cl && ln_c == 1) || (cl_c == 1 && ln_c == ln))
	{
		ft_putchar('\\');
	}
	else if ((cl_c > 1 && cl_c < cl) && (ln_c > 1 && ln_c < ln))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

void	rush(int column, int line)
{
	int	line_count;
	int	column_count;

	line_count = 1;
	column_count = 1;
	while (line_count <= line)
	{
		while (column_count <= column)
		{
			ft_check(column, line, column_count, line_count);
			column_count++;
		}
		line_count++;
		if (column != 0)
			ft_putchar('\n');
		column_count = 1;
	}
}
