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

char	*ft_strchr(const char *str, int c)
{
	int			i;
	int			found;
	const char	*pointer;

	i = 0;
	found = 0;
	while (str[i] && found == 0)
	{
		if (str[i] == c)
		{
			pointer = &str[i];
			found = 1;
		}
		else
		{
			i++;
			pointer = 0;
		}
	}
	return ((void *)pointer);
}
