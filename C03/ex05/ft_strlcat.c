/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 11:28:28 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/11 08:19:30 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;
	unsigned int	i;
	unsigned int	lensrc;
	unsigned int	res;

	i = 0;
	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (size > lendest)
		res = lensrc + lendest;
	else
		res = lensrc + size;
	while ((lendest + 1) < size && src[i] != '\0')
	{
		dest[lendest] = src[i];
		lendest++;
		i++;
	}
	dest[lendest] = '\0';
	return (res);
}
