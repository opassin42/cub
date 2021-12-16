/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:13:27 by opassin           #+#    #+#             */
/*   Updated: 2021/12/16 18:17:25 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# define BUFFER_SIZE 42
# define SUCCESS 0
# define FAIL -42
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>


//need initialization
typedef	struct s_map
{
	int	start;
	int is_correct;
	char player;
	int end;
}	t_map;


typedef	struct s_id
{
	int	no;
	int	no_path;
	int	so;
	int	so_path;
	int	we;
	int	we_path;
	int	ea;
	int	ea_path;
	int total;
}	t_id;

typedef	struct s_lines
{
	int	nb_line;
	int	max_length;
}	t_lines;

void    ft_init_id(t_id *id);
void    ft_init_lines(t_lines *lines);
int		ft_path_error(void);
int		ft_arg_error(void);
void	ft_open_error(void);
int		ft_check_path(char *path);
int 	ft_check_open(char *file);
int 	path_texture(char *path);
int		ft_get_line_info(char *s, t_lines *lines);
char	**init_map_tab(t_lines *lines);
void    ft_fill_map_tab(char *s, t_lines *lines, char **tab);
void	display_matrix(char **tab, t_lines *lines);
void	free_matrix(char **tab, t_lines *lines);

#endif
