/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:50:51 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/14 21:53:41 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size) / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size -1 -i] = tab[i];
		i++;
	}
}
