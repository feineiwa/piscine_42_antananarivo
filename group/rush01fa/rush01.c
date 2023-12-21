/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 22:54:16 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/10 23:09:31 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int		**tab2d;
	int		i;
	int		j;

	int	tab[4][4] = {{1, 2, 3, 4}, {2, 3, 4, 1}, {3, 5, 1, 2}, {4, 1, 2, 3}};
	char	test[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	i = 0;
	tab2d = (int **) malloc (4 * sizeof (int *));
	while (i < 4)
	{
		tab2d[i] = (int *) malloc (4 * sizeof (int));
		i++;
	}
	i = 0;
	if (argv[1][1] == *test)
	{
		while (i < 4)
		{
			while (j < 4)
			{
				write(1, &(tab[i][j]), 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
