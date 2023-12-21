/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahenin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:33:40 by frahenin          #+#    #+#             */
/*   Updated: 2023/12/14 22:39:36 by frahenin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size <= 0)
		return (len);
	while (src[i] != 0 && size != 0)
	{
		dest[i] = src[i];
		--size;
		i++;
	}
	dest[i] = '\0';
	return (len);
}
