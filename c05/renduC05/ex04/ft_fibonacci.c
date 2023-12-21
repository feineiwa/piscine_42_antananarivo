/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:07:39 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/14 11:42:31 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	term;

	term = 0;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	while (term < index)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci((index - 2)));
		term++;
	}
	return (0);
}
