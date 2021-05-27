/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strfamily.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 18:57:31 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/26 18:57:31 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int			i;
	int			found;
	const char	*pointer;

	i = 0;
	found = 0;
	while (str[i] && found == 0)
	{
		if (str[i] == c)
		{
			pointer = &str[i];
			found = 1;
		}
		else
		{
			i++;
			pointer = 0;
		}
	}
	return ((void *)pointer);
}

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	int			found;
	const char	*pointer;

	i = 0;
	found = 0;
	while (str[i])
		i++;
	while (str[i] >= 0 && found == 0)
	{
		if (str[i] == c)
		{
			pointer = &str[i];
			found = 1;
		}
		else
		{
			i--;
			pointer = 0;
		}
	}
	return ((void *)pointer);
}

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	valor;

	i = 0;
	valor = 0;
	if (n > 0)
	{
		while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
			i++;
		valor = (-(s2[i] - s1[i]));
	}
	return (valor);
}

char	*ft_strnstr(const char	*big, const char *little, unsigned int len)
{
	unsigned int		i;
	int					j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((void *) big);
	while (big[i] != '\0' && i < len - 1)
	{
		if (big[i] == little[j])
		{
			while (big[i + j] == little[j])
			{
				j++;
				if (!little[j])
					return ((void *) &big[i]);
			}
			j = 0;
		}
		i++;
	}
	return (0);
}
