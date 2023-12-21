/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:11:44 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/09 12:58:00 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	lendest;
	unsigned int	i;

	i = 0;
	lendest = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[lendest + i] = src[i];
		i++;
	}
	dest[i + lendest] = '\0';
	return (dest);
}
