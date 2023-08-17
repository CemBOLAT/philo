/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:00:53 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:00:57 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_arg_err(t_main *philo, char *argv)
{
	printf("\033[31mInvalid Arguments \n\033[0m");
	printf("\033[33mUsage: %s philosopher_count ", argv);
	printf("time_to_die eat_time sleep_time [max_hunger_count]\n\033[0m");
	free(philo);
	return ;
}

void	ft_arg_val_err(t_main *philo)
{
	printf("\033[31mInvalid Arguments \n\033[0m");
	printf("\033[33mUsage: Every single argument \
must be positive integer !!\n\033[0m");
	free(philo);
}

void	ft_arg_val_err_2(t_main *philo)
{
	printf("\033[1;36mPhilosopher number must more than 1\n\033[0m");
	free(philo);
}

void	ft_arg_val_err_3(t_main *philo)
{
	printf("\033[1;31mSemaphore can not opened ! \n\033[0m");
	free(philo);
}
