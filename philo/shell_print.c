/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:12:11 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:12:12 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_print(t_philo *man, int flag)
{
	if (flag == 0)
		printf("\033[34m%llums Philosopher %d has taken right fork", \
		ft_gettime() - man->my_main->start_time, man->ph_id);
	else if (flag == 1)
		printf("\033[34m%llums Philosopher %d has taken left fork", \
		ft_gettime() - man->my_main->start_time, man->ph_id);
	else if (flag == 2)
		printf("\033[32m%llums Philosopher %d is eating", ft_gettime() - \
		man->my_main->start_time, man->ph_id);
	else if (flag == 3)
		printf("\033[35m%llums Philosopher %d is sleeping", ft_gettime() - \
		man->my_main->start_time, man->ph_id);
	else if (flag == 4)
		printf("\033[36m%llums Philosopher %d is thinking", ft_gettime() - \
		man->my_main->start_time, man->ph_id);
	else if (flag == 5)
		printf("\033[31m%llums Philosopher %d is died", ft_gettime() - \
		man->my_main->start_time, man->ph_id);
	else if (flag == 6)
		printf("\033[33m%llums Philosopher %d is in his maximum eating < %d >", \
		ft_gettime() - man->my_main->start_time, man->ph_id, \
		man->my_main->nbr_to_max_eat);
	printf("\033[0m");
	printf("\n");
}

void	ft_shell_print(t_philo *man, int flag)
{
	if (man->my_main->is_any_died == 0)
	{
		pthread_mutex_lock(&(man->my_main->print));
		ft_print(man, flag);
		printf("\033[0m");
		pthread_mutex_unlock(&(man->my_main->print));
	}
}
