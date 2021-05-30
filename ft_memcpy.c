/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:21:17 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/29 18:21:17 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*alt;	
	unsigned char	*org;

	i = 0;
	org = (unsigned char *)src;
	alt = (unsigned char *)dest;
	while (i < n)
	{
		alt[i] = org[i];
		i++;
	}
	return (dest);
}
