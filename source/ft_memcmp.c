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

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*alt;	
	unsigned char	*org;

	if (str1 == str2 || n == 0)
		return (0);
	org = (unsigned char *)str2;
	alt = (unsigned char *)str1;
	while (n > 0)
	{
		if (*alt != *org)
			return (*alt - *org);
		else
		{
			alt++;
			org++;
			n--;
		}
	}
	return (0);
}
