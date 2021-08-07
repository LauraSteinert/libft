/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:55:02 by lsteiner          #+#    #+#             */
/*   Updated: 2021/08/07 15:55:02 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memjoin(void const *s1, void const *s2, size_t size1, size_t size2)
{
	void	*together;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	together = ft_calloc(size1 + size2, sizeof(char));
	if (together == NULL)
		return (NULL);
	ft_memcpy(together, s1, size1);
	ft_memcpy(together + size1, s2, size2);
	return (together);
}
