/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:51:59 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/16 23:00:58 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		write (1, &str[l], 1);
		l++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	**ft_sort_array(int argc, char **argv)
{
	int		len;
	int		i;
	char	*tmp;

	len = argc;
	i = 1;
	while (len > 0)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		len--;
		i = 1;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	else if (argc == 2)
	{
		ft_putstr(argv[1]);
		write (1, "\n", 1);
		return (0);
	}
	ft_sort_array(argc, argv);
	i = 1;
	while (argc > 1)
	{
		ft_putstr(argv[i]);
		write (1, "\n", 1);
		i++;
		argc--;
	}
	return (0);
}
