/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:58:08 by opassin           #+#    #+#             */
/*   Updated: 2021/12/07 16:55:09 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_init_id(t_id *id)
{
		id.no = 0;
		id.no_path = 0;
		id.so = 0;
		id.so_path = 0;
		id.we = 0;
		id.we_path = 0;
		id.ea = 0;
		id.ea_path = 0;
		id.total = 0;
}

void	ft_init_lines(t_lines *lines)
{
	lines.nb_line = 0;
	lines.max_length = 0;
}

char **init_map_tab(t_lines *lines)
{
	char	**tab;
	int		i;
   
	i = -1;
	tab = malloc(lines.nb_line);
	while (++i < lines.nb_line)
		tab[i] = malloc(lines.max_length);
	i = -1;
	while (++i < lines.nb_line)
	{
		j = -1;
		while (++j < lines.max_length)
				tab[i][j] = 0;
	}
	return (tab);
}
