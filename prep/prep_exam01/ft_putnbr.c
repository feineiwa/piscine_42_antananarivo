/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:10:37 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/07 22:17:14 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	ft_putnbr(int	nbr);
{
	if(nbr == -2147483648)
	{
		write (1, "nbr", 11);
		return ;
	}
	if (nbr >= 0 && nbr <= 9)
	{
		write (1, &nbr + '0', 1);
	}
	else if (nbr < 0)
	{
		write(1, '-', 1);
		ft_putnbr(nbr * (-));
	}
	else
	{
		ft_putnbr (nbr / 10);
		ft_putnbr (nbr % 10);
	}
}
