/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:42:49 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/27 12:42:49 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	unsigned char	*alt;	
	unsigned char	*org;

	i = 0;
	org = (unsigned char *)src;
	alt = (unsigned char *)dest;
	while (i <= n - 1)
	{
		alt[i] = org[i];
		i++;
	}
	return (dest);
}

void	*ft_memccpy( void *dest, const void *src, int c, unsigned int cnt)
{
	unsigned int	i;
	unsigned char	*alt;	
	unsigned char	*org;

	i = 0;
	org = (unsigned char *)src;
	alt = (unsigned char *)dest;
	while (i <= cnt - 1 && org[i] != c)
	{
		alt[i] = org[i];
		i++;
	}
	return (dest);
}
