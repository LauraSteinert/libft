/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 11:34:00 by lsteiner          #+#    #+#             */
/*   Updated: 2021/06/02 11:34:00 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*mod;

	new = NULL;
	if (lst == NULL)
		return (NULL);
	while (lst != NULL)
	{
		mod = ft_lstnew(f(lst->content));
		if (mod == NULL)
		{
			ft_lstdelone(new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, mod);
		lst = lst->next;
	}
	return (new);
}
