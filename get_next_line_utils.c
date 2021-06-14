/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 11:43:47 by emtran            #+#    #+#             */
/*   Updated: 2021/06/14 14:50:48 by emtran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	unsigned int	len_1;
	unsigned int	len_2;
	char			*str;

	if (s2 != 0)
	{
		len_1 = ft_strlen(s1);
		len_2 = ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (len_1 + len_2 + 1));
		if (!str)
			return (0);
		ft_memcpy(str, s1, len_1);
		ft_memcpy(str + len_1, s2, len_2 + 1);
		free(s1);
		s1 = NULL;
		str[len_1 + len_2] = '\0';
		return (str);
	}
	return (s1);
}

char	*ft_strcalloc(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

size_t	ft_strlen(char *str)
{
	unsigned int	c;

	if (!str)
		return (0);
	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char			*chdest;
	char			*chsrc;
	unsigned int	i;

	chdest = (char *)dest;
	chsrc = (char *)src;
	if (dest == 0 && src == 0)
		return (0);
	i = 0;
	while (i < count)
	{
		chdest[i] = chsrc[i];
		i++;
	}
	return (dest);
}
