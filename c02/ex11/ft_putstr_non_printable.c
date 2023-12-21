/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 13:16:23 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/12 14:07:37 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	div;
	int	mod;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			ft_putchar('\\');
			div = str[i] / 16;
			mod = str[i] % 16;
			ft_putchar(hex[div]);
			ft_putchar(hex[mod]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	c[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(c);
	return (0);
}
