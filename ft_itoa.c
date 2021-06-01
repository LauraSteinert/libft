/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 15:43:45 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/31 15:43:45 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_number(char *str, long nb, size_t len)
{
	str[len--] = '\0';
	if (nb == 0)
		str[0] = 48;
	else if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0 && nb != 0)
	{
		str[len] = 48 + (nb % 10);
		nb = nb / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	nb = n;
	len = ft_len(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_number(str, nb, len);
	return (str);
}
