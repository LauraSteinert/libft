/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:39:34 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/29 18:39:34 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	size = size - 1;
	if (size != 0)
	{
		while (i < size && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
