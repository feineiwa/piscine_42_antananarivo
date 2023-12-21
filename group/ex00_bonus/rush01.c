/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:18:03 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/03 20:27:47 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	show_highest_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('/');
		else if (i == x - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
		i++;
	}
}

void	show_lowest_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('\\');
		else if (i == (x - 1))
			ft_putchar('/');
		else
			ft_putchar('*');
		i++;
	}
}

void	show_middle_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('*');
		else if (i == (x - 1))
		{
			ft_putchar('*');
		}
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			show_highest_line(x);
		}
		else if (i == (y - 1))
		{
			show_lowest_line(x);
		}
		else
		{
			show_middle_line(x);
		}
		ft_putchar('\n');
		i++;
	}
}
