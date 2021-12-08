/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:34:45 by opassin           #+#    #+#             */
/*   Updated: 2021/12/08 17:51:20 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	display_matrix(char **tab, t_lines *lines)
{
	int	i;
	int	j;

	i = -1;
	while (++i < lines->nb_line)
	{
		j = -1;
		while (++j < lines->max_length)
			printf("%c", tab[i][j]);
		printf("\n");
	}
}
