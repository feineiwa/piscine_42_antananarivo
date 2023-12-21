/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 01:14:14 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/01 01:25:41 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;

	c = 0;
	while (c <= 9)
	{
		write (1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
