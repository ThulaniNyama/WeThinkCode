/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnyama <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 14:20:14 by tnyama            #+#    #+#             */
/*   Updated: 2018/04/14 20:32:56 by smbonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printer(int x, char print_top, char print_mid, char print_bot)
{
	ft_putchar(print_top);
	while ((x - 1) > 1)
	{
		ft_putchar(print_mid);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(print_bot);
	}
	ft_putchar('\n');
}

void	rush00(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (x < 127 && y < 100)
		{
			ft_printer(x, 'o', '-', 'o');
			y--;
			while (y > 1)
			{
				ft_printer(x, '|', ' ', '|');
				y--;
			}
			if (y > 0)
				ft_printer(x, 'o', '-', 'o');
		}
		else
		{
			write(1, "Please enter a number...\n", 26);
		}
	}
	else
	{
		write(1, "Negative numbers not allowed!\n", 30);
	}
}
