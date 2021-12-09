/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 12:53:06 by opassin           #+#    #+#             */
/*   Updated: 2021/12/09 12:23:23 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strchr(const char *s, int c)
{
	char	*tmpsrc;

	tmpsrc = (char *)s;
	while (*tmpsrc)
	{
		if (*tmpsrc == (char)c)
			return (tmpsrc);
		tmpsrc++;
	}
	if ((char)c == '\0' && *tmpsrc == '\0')
		return (tmpsrc);
	return (NULL);
}

static char	*ft_read(int fd, char *s)
{
	char		buff[BUFFER_SIZE + 1];
	int			i;

	if (fd < 0 || read(fd, buff, 0) < 0 || BUFFER_SIZE < 1)
		return (0);
	if (s == NULL)
		s = ft_strdup("");
	while (!(ft_strchr(s, '\n')))
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i < 0)
			return (0);
		buff[i] = '\0';
		s = ft_strfreejoin(s, buff, 1);
		if (s[0] == '\0' || i == 0)
			break ;
	}
	return (s);
}

char	*freenull(char *s, char *new_s)
{
	free(s);
	return (new_s);
}

int	ft_tmp(char *s, char **line)
{
	if (s && line)
		return (1);
	return (-1);
}

int	get_next_line(int fd, char **line)
{
	t_line				l;
	static char			*s;

	s = ft_read(fd, s);
	ft_tmp(s, line);
	l.line = ft_strchr(s, '\n');
	if (l.line != NULL)
	{
		l.size = l.line - s;
		*line = ft_strndup(s, l.size);
		if (!(*line))
			return (-1);
		s = freenull(s, ft_strdup(l.line + 1));
	}
	else
	{
		*line = ft_strdup(s);
		if (!(*line))
			return (-1);
		s = freenull(s, NULL);
		return (0);
	}
	return (1);
}
