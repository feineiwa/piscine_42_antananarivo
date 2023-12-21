/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 09:39:20 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/17 11:14:26 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(*arr) * (max - min));
	if (arr == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		arr[i] = min++;
		i++;
	}
	*range = arr;
	return (i);
}
