/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:22:39 by opassin           #+#    #+#             */
/*   Updated: 2021/11/27 14:48:54 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

long	ft_read(int fd, char *buff)
{
	long br;

	br = read(fd, buff, BUFFER_SIZE);
	if (br >= 0)
		buff[br] = 0;
	return (br);
}

char *get_next_line(int fd)
{
		//norm a revoir
		static char buff[BUFFER_SIZE + 1];
		static char *cur = NULL;
		static int done = 0;
		char *tmp, *line;
		long br;

		if (!cur)
		{
				if(ft_read(fd, buff) < 0)
						return(NULL);
				cur = buff;
		}
		if (done)
				return (NULL);
		line = ft_strdup("");
		while(!ft_strchr(cur, '\n'))
		{
				tmp = line;
				line = ft_strjoin(tmp, cur, 0);
				free(tmp);
				if (!line)
						return (NULL);
				if ((br = ft_read(fd, buff) ) < 0)
						return (NULL);
				else if (!br)
				{
						done = 1;
						return (line);
				}
				cur = buff;
		}
		*(ft_strchr(cur, '\n')) = 0;
		tmp = line;
		line = ft_strjoin(tmp, cur, 1);
		free(tmp);
		if (!line)
				return (NULL);
		cur = ft_strchr(cur, 0) + 1;
		return (line);
}
