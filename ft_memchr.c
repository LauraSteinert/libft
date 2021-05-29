/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:24:50 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/29 18:24:50 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*alt;

	i = 0;
	alt = (unsigned char *)str;
	if (str == 0)
		return (0);
	while (i <= n)
	{
		if (alt[i] == c)
			return (&alt[i]);
		i++;
	}
	return (0);
}
