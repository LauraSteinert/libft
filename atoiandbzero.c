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

int	ft_atoi(char *str)
{
	int			i;
	int			sign;
	long int	value;

	i = 0;
	sign = 1;
	value = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ' || str[i] == '\n')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	return (((int)value) * sign);
}

void	ft_bzero(void *s, unsigned int n)
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
