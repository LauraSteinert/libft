/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:23:57 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/29 18:23:57 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned int	i;

	if (str2 < str1)
	{
		while (n > 0)
		{
			n--;
			((char *)str1)[n] = ((char *)str2)[n];
		}
	}
	else
	{
		i = 0;
		while (i != n - 1)
		{
			((char *)str1)[i] = ((char *)str2)[i];
			i++;
		}
	}
	return (str1);
}
