/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlfamily.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 20:32:55 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/24 20:32:55 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_dest_length(char *dest, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	return (i);
}

static unsigned int	ft_src_length(const char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_size;

	j = 0;
	i = ft_dest_length(dest, size);
	src_size = ft_src_length(src);
	if (i < size)
	{
		while (i + j < size - 1 && src[j] != '\0')
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	return (i + src_size);
}
