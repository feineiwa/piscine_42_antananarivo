/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 00:15:27 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/13 15:04:04 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	nbr = nb;
	i = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (i <= (power - 1))
		{
			nbr = nbr * nb;
			i++;
		}
		return (nbr);
	}
	return (0);
}
