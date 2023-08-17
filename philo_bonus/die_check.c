/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:00:12 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:00:13 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	*ft_is_die(void *arg)
{
	t_main	*philo;
	t_philo	*man;

	man = (t_philo *)arg;
	philo = man->my_main;
	while (1)
	{
		if (ft_gettime() - man->last_eat > philo->t_to_die)
		{
			ft_shell_print(man, 5);
			philo->is_any_died = 1;
			exit(1);
		}
		usleep(100);
	}
	return (NULL);
}
