/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:28:02 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/27 11:28:02 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset (void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*alt;

	i = 0;
	alt = (unsigned char *)s;
	while (i <= n - 1)
	{
		alt[i] = c;
		i++;
	}
	return (s);
}
