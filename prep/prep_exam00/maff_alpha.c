/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 01:48:44 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/01 01:59:14 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char min;
	char maj;
	int i;

	min = 'a';
	maj = 'B';
	i = 0;
	while (i <= 12)
	{
		write(1, &min, 1);
		write(1, &maj, 1);
		min = min + 2;
		maj = maj + 2;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
