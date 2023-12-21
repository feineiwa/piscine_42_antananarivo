/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 08:02:50 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/20 18:59:36 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"

struct	s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char	*str[2];
	char	*str1;
	char	*str2;

	str1 = "hello";
	str2 = "world";
	str[0] = str1;
	str[1] = str2;
	ft_show_tab(ft_strs_to_tab(3, str));
}
