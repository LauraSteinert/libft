/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:18:57 by lsteiner          #+#    #+#             */
/*   Updated: 2021/06/02 11:18:57 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*var;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		var = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = var;
	}
}
