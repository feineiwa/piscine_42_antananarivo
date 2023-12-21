/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:30:12 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/03 20:33:02 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	show_highest_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('o');
		else if (i == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
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
			ft_putchar('o');
		else if (i == (x - 1))
			ft_putchar('o');
		else
			ft_putchar('-');
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
			ft_putchar('|');
		else if (i == (x - 1))
		{
			ft_putchar('|');
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
