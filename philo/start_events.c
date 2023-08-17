/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_events.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:12:19 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:12:20 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*ft_run_process(void *arg)
{
	t_philo	*man;

	man = (t_philo *)arg;
	if (man->ph_id % 2 == 0)
		ft_time_away(man->my_main->t_to_eat, man->my_main);
	while (man->my_main->is_any_died == 0)
	{
		ft_eat_meal(man);
		if (man->eat_count >= man->my_main->nbr_to_max_eat \
		&& man->my_main->nbr_to_max_eat != -2)
		{
			man->my_main->finish_eating = 1;
			break ;
		}
		ft_sleeping(man);
		if (man->my_main->is_any_died == 1)
			break ;
		ft_thinking(man);
	}
	return (NULL);
}

void	ft_starting_events(t_main *data)
{
	int	i;

	i = -1;
	while (++i < data->philo_nbr)
	{
		pthread_create(&data->parg[i].t_id, NULL, \
		ft_run_process, &(data->parg[i]));
		usleep(20);
	}
	ft_is_die(data);
	i = -1;
	while (++i < data->philo_nbr)
		pthread_join(data->parg[i].t_id, NULL);
	i = -1;
	while (++i < data->fork_nbr)
		pthread_mutex_destroy(&data->forks[i]);
	pthread_mutex_destroy(&data->print);
}
