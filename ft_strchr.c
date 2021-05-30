/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:47:11 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/29 18:47:11 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	search;
	unsigned char	*s_cpy;

	s_cpy = (unsigned char *)s;
	search = (unsigned char)c;
	if (*s_cpy == search)
		return ((char *)s);
	while (*s_cpy++)
	{
		if (*s_cpy == search)
			return ((char *)s_cpy);
	}
	return (NULL);
}
