/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <opassin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:11:12 by opassin           #+#    #+#             */
/*   Updated: 2021/12/11 18:47:58 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

typedef struct s_line
{
	char	*line;
	size_t	size;
}	t_line;

size_t			ft_strlen(char *src);
char			*ft_strfreejoin(char *s1, char *s2, int out);
char			*ft_strdup(char *src);
char			*ft_strndup(char *src, size_t n);
int				get_next_line(int fd, char **line);
char			*freenull(char *s, char *new_s);
int				ft_tmp(char *s, char **line);

#endif
