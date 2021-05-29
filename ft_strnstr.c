/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strfamily.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 18:57:31 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/26 18:57:31 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	unsigned int		i;
	int					j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((void *) big);
	while (big[i] != '\0' && i < len - 1)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j])
			{
				j++;
				if (!little[j])
					return ((void *) &big[i]);
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
