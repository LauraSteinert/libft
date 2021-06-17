/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 19:07:53 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/31 19:07:53 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[11];
	int		counter;
	int		i;

	i = 1;
	counter = n / 10;
	while (counter)
	{
		counter /= 10;
		i++;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	else
		n *= -1;
	s[i] = '\0';
	while (i--)
	{
		s[i] = ((n % 10) * -1) + '0';
		n /= 10;
	}
	ft_putstr_fd(s, fd);
}
