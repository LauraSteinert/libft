/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:22:24 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/29 18:22:24 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	void	*pointer;
	size_t	distance;

	pointer = ft_memchr(src, c, n);
	if (pointer != NULL)
	{
		distance = (size_t)pointer - (size_t)src + 1;
		return (ft_memcpy(dest, src, distance) + distance);
	}
	ft_memcpy(dest, src, n);
	return (NULL);
}
