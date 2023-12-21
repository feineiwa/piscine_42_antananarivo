/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:38:45 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/05 17:57:40 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}
void	ft_putnbr(int nbr);
int	main(void)
{
	int val;
	char	*ex;
	ex = "ejdkdjkaji";
	val = ft_strlen(ex);
	ft_putnbr(val);
	return (0);
}
