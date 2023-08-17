/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:06:09 by cbolat            #+#    #+#             */
/*   Updated: 2023/03/21 00:19:48 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_thinking(t_philo *man)
{
	ft_shell_print(man, 4);
}

void	ft_sleeping(t_philo *man)
{
	ft_shell_print(man, 3);
	ft_time_away(man->my_main->t_to_sleep, man->my_main);
}

void	ft_eat_meal(t_philo *man)
{
	pthread_mutex_lock(&(man->my_main->forks[man->right_fork]));
	pthread_mutex_lock(&(man->my_main->forks[man->left_fork]));
	ft_shell_print(man, 0);
	ft_shell_print(man, 1);
	man->last_eat = ft_gettime();
	ft_shell_print(man, 2);
	man->eat_count++;
	if (man->eat_count == man->my_main->nbr_to_max_eat)
		ft_shell_print(man, 6);
	ft_time_away(man->my_main->t_to_eat, man->my_main);
	pthread_mutex_unlock(&(man->my_main->forks[man->right_fork]));
	pthread_mutex_unlock(&(man->my_main->forks[man->left_fork]));
}
