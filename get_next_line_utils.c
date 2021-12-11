/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 12:40:00 by opassin           #+#    #+#             */
/*   Updated: 2021/12/11 18:50:06 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i++])
		;
	return (i - 1);
}

static void	ft_free(char *s1, char *s2, int out)
{
	if (out == 1)
		free(s1);
	if (out == 2)
		free(s2);
	if (out == 3)
	{
		free(s1);
		free(s2);
	}
	else
		return ;
}

char	*ft_strfreejoin(char *s1, char *s2, int out)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	if (s1)
		while (s1[j])
			str[i++] = s1[j++];
	j = 0;
	if (s2)
		while (s2[j])
			str[i++] = s2[j++];
	str[i] = '\0';
	ft_free(s1, s2, out);
	return (str);
}

char	*ft_strdup(char *src)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = malloc(ft_strlen(src) + 1);
	if (!tmp)
		return (NULL);
	while (i < ft_strlen(src))
	{
		tmp[i] = src[i];
		++i;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	*ft_strndup(char *src, size_t n)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = malloc(sizeof(char) * (n + 1));
	if (!tmp)
		return (NULL);
	while (i < n)
	{
		tmp[i] = src[i];
		++i;
	}
	tmp[i] = '\0';
	return (tmp);
}
