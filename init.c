/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:58:08 by opassin           #+#    #+#             */
/*   Updated: 2021/12/11 20:18:52 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_init_id(t_id *id)
{
		id->no = 0;
		id->no_path = 0;
		id->so = 0;
		id->so_path = 0;
		id->we = 0;
		id->we_path = 0;
		id->ea = 0;
		id->ea_path = 0;
		id->total = 0;
}

void	ft_init_lines(t_lines *lines)
{
	lines->nb_line = 0;
	lines->max_length = 0;
}

char **init_map_tab(t_lines *lines)
{
	char	**tab;
	int		i;
	int		j;
   
	i = 0;
	tab = malloc(sizeof(char*) * lines->nb_line);
	while (++i <= lines->nb_line)
		tab[i - 1] = malloc(lines->max_length);
	i = 0;
	while (++i <= lines->nb_line)
	{
		j = 0;
		while (++j <= lines->max_length)
				tab[i - 1][j - 1] = 0;
	}
	return (tab);
}
