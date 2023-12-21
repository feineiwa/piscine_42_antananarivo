/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:42:51 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/13 14:38:26 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nbr)
{
	int	i;
	int	fac;

	i = 2;
	fac = 1;
	if (nbr < 0)
		return (0);
	while (i <= nbr)
	{
		fac = fac * i;
		i++;
	}
	return (fac);
}
