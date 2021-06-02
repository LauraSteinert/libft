/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:48:09 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/29 18:48:09 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	search;
	unsigned char	*s_cpy;

	len = ft_strlen(s) + 1;
	s_cpy = (unsigned char *)s;
	search = (unsigned char)c;
	while (len--)
	{
		if (s_cpy[len] == search)
			return ((char *)s + len);
	}
	return (NULL);
}
