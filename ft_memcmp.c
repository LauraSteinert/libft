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
	unsigned int	i;
	unsigned int	value;
	unsigned char	*alt;	
	unsigned char	*org;

	i = 0;
	org = (unsigned char *)str2;
	alt = (unsigned char *)str1;
	while (i <= n && org[i] == alt[i])
		i++;
	value = (-(org[i] - alt[i]));
	return (value);
}
