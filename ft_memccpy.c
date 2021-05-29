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

void	*ft_memccpy(void *dest, const void *src, int c, size_t cnt)
{
	unsigned int	i;
	unsigned char	*alt;	
	unsigned char	*org;

	i = 0;
	org = (unsigned char *)src;
	alt = (unsigned char *)dest;
	while (i <= cnt && org[i] != c)
	{
		alt[i] = org[i];
		i++;
	}
	return (dest);
}
