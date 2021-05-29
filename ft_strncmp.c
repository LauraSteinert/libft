/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:49:06 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/29 18:49:06 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	value;

	i = 0;
	value = 0;
	if (n > 0)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
			i++;
		value = (-(s2[i] - s1[i]));
	}
	return (value);
}
