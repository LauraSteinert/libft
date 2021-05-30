/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:46:42 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/30 17:46:42 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int alph)
{
	if (alph >= 65 && alph <= 90)
		return (1);
	else if (alph >= 97 && alph <= 122)
		return (1);
	else if (alph >= 48 && alph <= 57)
		return (1);
	return (0);
}
