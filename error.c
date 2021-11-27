/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opassin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:56:41 by opassin           #+#    #+#             */
/*   Updated: 2021/11/27 15:35:52 by opassin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int		ft_path_error(void)
{
	printf("Error: extension error\nYour file must be terminated by '.cub'\n");
	return (FAIL);
}

int		ft_arg_error(void)
{
	printf("Error: number of arguments is invalid\nYou must have only one argument ex: './cub3d map.cub'\n");
	return (FAIL);
}

void	ft_open_error(void)
{
	printf("Error: open error\n impossible to load your 'map.cub'\n. check your file\nHer might be corrupted\n");
}
