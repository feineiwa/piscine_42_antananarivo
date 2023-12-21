/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 23:01:06 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/14 23:07:09 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len_to_find;

	i = 0;
	j = 0;
	len_to_find = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (0)
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			while (str[i + j] != '\0' && str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
