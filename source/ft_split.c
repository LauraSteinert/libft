/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsteiner <lsteiner@students.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 17:00:47 by lsteiner          #+#    #+#             */
/*   Updated: 2021/05/31 17:00:47 by lsteiner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
{
	int		count;
	size_t	len;

	len = 0;
	count = 0;
	while (*s)
	{
		if (*s == c)
			count = 0;
		else if (count == 0)
		{
			count = 1;
			len++;
		}
		s++;
	}
	return (len);
}

static size_t	ft_length(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	*ft_newstr(const char *s, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	*ft_free(char const **s, int i)
{
	while (i > 0)
	{
		i--;
		free((void *)s[i]);
	}
	free((void *)s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	size;
	size_t	words;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	words = ft_wordcount(s, c);
	new = malloc(sizeof(char *) * (words + 1));
	if (new == NULL)
		return (NULL);
	while (i < words)
	{
		size = ft_length(s, c);
		if (size)
		{
			new[i] = ft_newstr(s, size);
			if (new[i++] == NULL)
				return (ft_free((const char **) new, i - 1));
		}
		s += size + 1;
	}
	new[i] = NULL;
	return (new);
}
