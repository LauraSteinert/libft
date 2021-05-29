/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoiandbzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:10:50 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/26 22:10:50 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*alt;

	i = 0;
	alt = (unsigned char *)s;
	while (i <= n - 1)
	{
		alt[i] = '\0';
		i++;
	}
}