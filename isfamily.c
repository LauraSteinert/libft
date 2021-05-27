/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isfamily.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 15:28:31 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/22 15:28:31 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int str)
{
	if (str >= 65 && str <= 90)
		return (1);
	else if (str >= 97 && str <= 122)
		return (1);
	return (0);
}

int	ft_isdigit(int number)
{
	if (number >= 48 && number <= 57)
		return (1);
	return (0);
}

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

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (((c >= 0) && (c <= 31)) || (c == 127))
		return (0);
	return (1);
}
