/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:13:27 by opassin           #+#    #+#             */
/*   Updated: 2021/12/07 17:07:26 by opassin          ###   ########.fr       */
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
int		ft_path_error(void);
int		ft_path_error(void);
void	ft_open_error(void);
int		ft_check_path(char *path)
int 	ft_check_open(char *file)
int		ft_strlen(char *s);
char	*ft_strdup(char *s);
char	*ft_strchr(char *s, char c);
char	*ft_strjoin(char *s1, char *s2, int nl);
void	*ft_memcpy(void *s1, char *s2, int len);
long	ft_read(int fd, char *buff);
char	*get_next_line(int fd);
int ft_get_max_length(char *s, t_lines *lines);
int ft_get_nb_line(char *s, t_lines *lines);
char **init_map_tab(t_lines *lines);
void    ft_fill_map_tab(char *s, t_lines *lines, char **tab);

#endif
