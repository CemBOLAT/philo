/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:00:17 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:00:19 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

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
	sem_wait(man->my_main->forks);
	ft_shell_print(man, 0);
	sem_wait(man->my_main->forks);
	ft_shell_print(man, 1);
	man->last_eat = ft_gettime();
	ft_shell_print(man, 2);
	man->eat_count++;
	if (man->eat_count == man->my_main->nbr_to_max_eat)
	{
		ft_shell_print(man, 6);
		ft_time_away(man->my_main->t_to_eat, man->my_main);
		sem_post(man->my_main->forks);
		sem_post(man->my_main->forks);
		ft_time_away(man->my_main->t_to_eat, man->my_main);
		return ;
	}
	ft_time_away(man->my_main->t_to_eat, man->my_main);
	sem_post(man->my_main->forks);
	sem_post(man->my_main->forks);
}
