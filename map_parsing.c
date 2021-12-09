/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:46:38 by opassin           #+#    #+#             */
/*   Updated: 2021/12/09 14:49:25 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include "get_next_line.h"

int check_texture(char *s, t_id *id)
{
		if (s[0] == 'N' && s[1] == 'O' && id->no == 0)
		{
			id->no = 1;
			if (*(s + 3) == '.' && (path_texture(s + 3) == SUCCESS))
				id->no_path = 1;
		}
		else if (s[0] == 'S' && s[1] == 'O' && id->so == 0)
		{
			id->so = 1;
			if (*(s + 3) == '.' && (path_texture(s + 3) == SUCCESS))
				id->so_path = 1;
		}
		else if (s[0] == 'W' && s[1] == 'E' && id->we == 0)
		{
				id->we = 1;
			if (*(s + 3) == '.' && (path_texture(s + 3) == SUCCESS))
				id->we_path = 1;
		}
		else if (s[0] == 'E' && s[1] == 'A' && id->we == 0)
		{
				id->ea = 1;
			if (*(s + 3) == '.' && (path_texture(s + 3) == SUCCESS))
				id->ea_path = 1;
		}
		else
				return (FAIL);
		return (SUCCESS);
}

int	path_texture(char *path)
{
	if (ft_check_open(path) == FAIL)
		return (FAIL);
	return (SUCCESS);
}

int ft_check_path(char *path)
{
	int	i;

	i = -1;
	if (path[0] == '.')
		return (FAIL);
	while (path[++i] != '.')
		;
	if (path[i + 1] != 'c' || path[i + 2] != 'u'|| path[i + 3] != 'b' || path[i + 4])
		return (FAIL);
	if (ft_check_open(path) == FAIL)
		return (FAIL);
	return (SUCCESS);
}

int	ft_check_open(char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (!file)
	{
		ft_open_error();
		return (FAIL);
	}
	close(fd);
	return (SUCCESS);
}

int	ft_get_line info(char *s, t_lines *lines)
{
	char *line;
	int 	fd;
	int		i;

	fd = open(s, O_RDONLY);
	while(get_next_line(fd, &line))
	{
		i = 0;
		++lines->nb_line;
		while(line[(++i) - 1])
			if (i > lines->max_length)
					lines->max_length = i;
		free(line);
	}
	close(fd);
	return (SUCCESS);	
}

void	ft_fill_map_tab(char *s, t_lines *lines, char **tab)
{
	char *line;
	int 	fd;
	int		i;
	int		j;

	i = -1;
	fd = open(s, O_RDONLY);
	while(get_next_line(fd, &line))
	{
		++i;
		j = -1;
		while (++j < lines->max_length)
			tab[i][j] = line[j];
		free(line);
	}
	close(fd);
}
