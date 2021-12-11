/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:34:45 by opassin           #+#    #+#             */
/*   Updated: 2021/12/11 20:24:23 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	display_matrix(char **tab, t_lines *lines)
{
	int	i;
	int	j;

	i = 0;
	while (++i <= lines->nb_line)
	{
		j = 0;
		while (++j <= lines->max_length)
			printf("%c", tab[i - 1][j - 1]);
		printf("\n");
	}
}

void	display_id(t_id *id)
{
		printf("NO = %d NO_PATH = %d\n", id->no, id->no_path);
		printf("SO = %d SO_PATH = %d\n", id->so, id->so_path);
		printf("WE = %d WE_PATH = %d\n", id->we, id->we_path);
		printf("EA = %d EA_PATH = %d\n", id->ea, id->ea_path);
}

void	free_matrix(char **tab, t_lines *lines)
{
	int	i;

	i = 0;
	while (++i <= lines->nb_line)
		free(tab[i - 1]);
	free(tab);
}
