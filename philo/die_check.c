/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:07:31 by cbolat            #+#    #+#             */
/*   Updated: 2023/03/21 19:26:24 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_is_die(t_main *data)
{
	int	i;

	while (data->finish_eating == 0)
	{
		i = 0;
		while (i < data->philo_nbr)
		{
			if (ft_gettime() - data->parg[i].last_eat > \
			(u_int16_t)data->t_to_die)
			{
				ft_shell_print(&(data->parg[i]), 5);
				data->is_any_died = 1;
			}
			i++;
		}
		if (data->is_any_died == 1)
			break ;
	}
}
