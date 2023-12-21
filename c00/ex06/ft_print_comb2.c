/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:19:58 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/02 13:46:41 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	spacing(void)
{
	write (1, ",", 1);
	write (1, " ", 1);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	convertion(char c, int x, int y)
{
	c = '0' + (x / 10);
	ft_putchar(c);
	c = '0' + (x % 10);
	ft_putchar(c);
	write (1, " ", 1);
	c = '0' + (y / 10);
	ft_putchar(c);
	c = '0' + (y % 10);
	ft_putchar(c);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;
	char	c;

	x = 00;
	y = 01;
	c = '0';
	while (x <= 98)
	{
		while (y <= 99)
		{
			convertion(c, x, y);
			if (x == 98 && y == 99)
				return ;
			else
			{
				spacing();
			}
			y++;
		}
		x++;
		y = x + 1;
		x = y - 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
