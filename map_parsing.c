/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parsing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:46:38 by opassin           #+#    #+#             */
/*   Updated: 2021/11/27 16:47:41 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int check_texture(char *s, t_id *id)
{
		if (s[0] == 'N' && s[1] == 'O' && id.no == 0)
		{
			id.no = 1;
			if (if *(s + 3) == '.' && path_texture(s + 3) == SUCCESS)
				id.no_path = 1;
		}
		else if (s[0] == 'S' && s[1] == 'O' && id.so == 0)
		{
			id.so = 1;
			if (if *(s + 3) == '.' && path_texture(s + 3) == SUCCESS)
				id.so_path = 1;
		}
		else if (s[0] == 'W' && s[1] == 'E' && id.we == 0)
		{
				id.we = 1;
			if (if *(s + 3) == '.' && path_texture(s + 3) == SUCCESS)
				id.we_path = 1;
		}
		else if (s[0] == 'E' && s[1] == 'A' && id.we == 0)
		{
				id.ea = 1;
			if (if *(s + 3) == '.' && path_texture(s + 3) == SUCCESS)
				id.ea_path = 1;
		}
		else
				return (FAIL);
		return (SUCCES);
}

int	path_texture(char *s)
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

	fd = open(path, O_RDONLY);
	if (!file)
	{
		ft_open_error();
		return (FAIL);
	}
	return (SUCCESS);
}

int ft_get_nb_line(char *s)
{//get number of line non-empty in the file
	str = malloc(s);
	if (!str)
			return (NULL);
	
}

int	main(int ac, char **av)
{
		if (ac != 2)
				return (ft_arg_error());
		if (ft_check_path(av[1]) == FAIL)
				return (ft_path_error());
		printf ("good path : %s\n", av[1]);
		return (SUCCESS);
}
