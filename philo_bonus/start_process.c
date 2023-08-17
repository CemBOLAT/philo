/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_process.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:01:23 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:01:25 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	*ft_run_process(void *arg)
{
	t_philo	*man;

	man = (t_philo *)arg;
	man->last_eat = ft_gettime();
	if (man->ph_id % 2 == 0)
		ft_time_away(man->my_main->t_to_eat, man->my_main);
	pthread_create(&man->my_main->died, NULL, ft_is_die, man);
	while (man->my_main->is_any_died == 0)
	{
		ft_eat_meal(man);
		if (man->eat_count >= man->my_main->nbr_to_max_eat \
		&& man->my_main->nbr_to_max_eat != -2)
			exit(1);
		ft_sleeping(man);
		if (man->my_main->is_any_died == 1)
			break ;
		ft_thinking(man);
	}
	return (NULL);
}

void	ft_create_process(t_main *philo, int i)
{
	philo->pids = (pid_t *)malloc(sizeof(pid_t) * philo->philo_nbr);
	while (++i < philo->philo_nbr)
	{
		philo->pids[i] = fork();
		if (philo->pids[i] < 0)
			ft_exit("Fork is not opened !", philo);
		else if (philo->pids[i] == 0)
			ft_run_process(&philo->parg[i]);
		usleep(100);
	}
	pthread_create(&philo->t_id, NULL, ft_kill_process, philo);
	pthread_join(philo->t_id, NULL);
}
