/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:53:16 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/07 22:10:01 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		x;
	int		y;
	char	c;

	x = 00;
	y = 01;
	while (x <= 98)
	{
		while (y <= 99)
		{
			c = '0' + (x / 10);
			write(1, &c, 1);
			c = '0' + (x % 10);
			write (1, &c, 1);
			write (1, " ", 1);
			c = '0' + (y / 10);
			write (1, &c, 1);
			c = '0' + (y % 10);
			write (1, &c, 1);
			if (x == 98 && y == 99)
				return ;
			else
			{
				write (1, ",", 1);
				write (1, " ", 1);
			}
			y++;
		}
		x++;
		y = x + 1;
		x = y - 1;
	}
}

int main(void)
{
	ft_print_comb2();
     return (0);
}

