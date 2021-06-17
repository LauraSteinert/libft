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
	char	*alt;
	char	*end;

	alt = (char *)str;
	end = (char *)str + n;
	while (alt < end)
	{
		if (*alt == (char)c)
			return (alt);
		alt++;
	}
	return (NULL);
}
