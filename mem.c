/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 12:42:49 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/27 12:42:49 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*alt;	
	unsigned char	*org;

	i = 0;
	org = (unsigned char *)src;
	alt = (unsigned char *)dest;
	while (i <= n)
	{
		alt[i] = org[i];
		i++;
	}
	return (dest);
}

void	*ft_memccpy(void *dest, const void *src, int c, size_t cnt)
{
	unsigned int	i;
	unsigned char	*alt;	
	unsigned char	*org;

	i = 0;
	org = (unsigned char *)src;
	alt = (unsigned char *)dest;
	while (i <= cnt && org[i] != c)
	{
		alt[i] = org[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned int	i;

	if (str2 < str1)
	{
		while (n > 0)
		{
			n--;
			((char *)str1)[n] = ((char *)str2)[n];
		}
	}
	else
	{
		i = 0;
		while (i != n - 1)
		{
			((char *)str1)[i] = ((char *)str2)[i];
			i++;
		}
	}
	return (str1);
}

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*alt;

	i = 0;
	alt = (unsigned char *)str;
	if (str == 0)
		return (0);
	while (i <= n)
	{
		if (alt[i] == c)
			return (&alt[i]);
		i++;
	}
	return (0);
}

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned int	value;
	unsigned char	*alt;	
	unsigned char	*org;

	i = 0;
	org = (unsigned char *)str2;
	alt = (unsigned char *)str1;
	while (i <= n && org[i] == alt[i])
		i++;
	value = (-(org[i] - alt[i]));
	return (value);
}
