/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:48:43 by opassin           #+#    #+#             */
/*   Updated: 2021/12/09 14:49:30 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	main(int ac, char **av)
{
		int ret;
		t_id	id;
		t_lines lines;
		char **tab;

		ret = SUCCESS;
		if (ac != 2)
				return (ft_arg_error());
		if (ft_check_path(av[1]) == FAIL)
				return (ft_path_error());
		ft_init_id(&id);
		ft_init_lines(&lines);
		ft_get_max_length(av[1], &lines);
		printf("%d et %d\n", lines.nb_line, lines.max_length);
		tab = init_map_tab(&lines);
		ft_fill_map_tab(av[1], &lines, tab);
		display_matrix(tab, &lines);
		return (ret);
}
