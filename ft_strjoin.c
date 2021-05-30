/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 14:38:00 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/30 14:38:00 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_dest_length(char const *s1)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

static unsigned int	ft_src_length(char const *s2)
{
	unsigned int	i;

	i = 0;
	while (s2[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*new;

	i = 0;
	len1 = ft_dest_length(s1);
	len2 = ft_src_length(s2);
	new = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (new == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new[len1] = s2[i];
		len1++;
		i++;
	}
	new[len1] = '\0';
	return (new);
}
