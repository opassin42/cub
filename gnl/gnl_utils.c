/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:11:45 by opassin           #+#    #+#             */
/*   Updated: 2021/11/27 14:43:48 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_strlen(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*str;
	int		len;

	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (len--)
		*str++ = *s++;
	*str = 0;
	return (str);
}

char	*ft_strchr(char *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (c == s[i])
			return (s + i);
	if (c == 0)
		return (s + i);
	return (NULL);
}

void	*ft_memcpy(void *s1, char *s2, int len)
{
	char	*dst;
	char	*src;

	dst = (char *)s1;
	src = (char *)s2;
	if (!dst || !src)
		return (NULL);
	while (len--)
		*dst++ = *src++;
	return (s1);
}

char	*ft_strjoin(char *s1, char *s2, int nl)
{
	int		len1;
	int		len2;
	char	*joined;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined = malloc (len1 + len2 + 1 + nl);
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, len1);
	ft_memcpy(joined + len1, s2, len2);
	if (nl)
		joined[len1 + len2] = '\n';
	joined[len1 + len2 + nl] = 0;
	return (joined);
}
