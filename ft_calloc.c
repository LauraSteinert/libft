/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:18:22 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/28 17:18:22 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t si1ze)
{
	void	*dest;

	dest = malloc(sizeof(nmemb * si1ze));
	if (dest == NULL)
		return (NULL);
	ft_bzero(dest, nmemb * si1ze);
	return (dest);
}
