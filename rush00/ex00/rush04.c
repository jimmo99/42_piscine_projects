																																																																																																																																																																																																																																																		º																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																													/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkosa <dkosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 12:44:43 by dkosa             #+#    #+#             */
/*   Updated: 2026/07/12 16:32:02 by dkosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char val);

void	first_row(int x, int x_max)
{
	char	val;

	while (x <= x_max)
	{
		if (x == 1)
			val = 'A';
		else if (x == x_max)
			val = 'C';
		else
			val = 'B';
		ft_putchar(val);
		x++;
	}
}

void	middle_rows(int x, int x_max)
{
	char	val;

	while (x <= x_max)
	{
		if (x == 1 || x == x_max)
			val = 'B';
		else
			val = ' ';
		ft_putchar(val);
		x++;
	}
}

void	final_row(int x, int x_max)
{
	char	val;

	while (x <= x_max)
	{
		if (x == 1)
			val = 'C';
		else if (x == x_max)
			val = 'A';
		else
			val = 'B';
		ft_putchar(val);
		x++;
	}
}

/* ######## rush ######### */

void	rush(int x_max, int y_max)
{
	int	x;
	int	y;

	if (x_max <= 0 || y_max <= 0)
		return ;
	y = 1;
	while (y <= y_max)
	{
		x = 1;
		if (y == 1)
			first_row(x, x_max);
		else if (y == y_max)
			final_row(x, x_max);
		else
			middle_rows(x, x_max);
		write (1, "\n", 1);
		y++;
	}
}
