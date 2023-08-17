/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   import_datas.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:11:48 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:13:31 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ft_atoi(const char *str)
{
	int	res;

	res = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			res = (10 * res) + (*str - '0');
		else
			return (-1);
		str++;
	}
	if (res == 0)
		return (-1);
	return (res);
}

void	ft_import_philos(t_main *philo)
{
	int	i;

	i = -1;
	philo->parg = (t_philo *)malloc(sizeof(t_philo) * philo->philo_nbr);
	while (++i < philo->philo_nbr)
	{
		philo->parg[i].ph_id = i + 1;
		philo->parg[i].left_fork = i - 1;
		philo->parg[i].right_fork = i;
		philo->parg[i].my_main = philo;
		philo->parg[i].eat_count = 0;
		philo->parg[i].last_eat = ft_gettime();
	}
	philo->parg[0].left_fork = i - 1;
}

void	ft_import_mutex(t_main *philo)
{
	int	i;

	i = -1;
	pthread_mutex_init(&philo->print, NULL);
	philo->forks = malloc(sizeof(pthread_mutex_t) * philo->philo_nbr);
	while (++i < philo->fork_nbr)
	{
		pthread_mutex_init(&philo->forks[i], NULL);
	}
	philo->start_time = ft_gettime();
}

int	ft_import_args(t_main *philo, int c, char **v)
{
	philo->philo_nbr = ft_atoi(v[1]);
	philo->t_to_die = ft_atoi(v[2]);
	philo->t_to_eat = ft_atoi(v[3]);
	philo->t_to_sleep = ft_atoi(v[4]);
	philo->fork_nbr = philo->philo_nbr;
	if (c == 6)
		philo->nbr_to_max_eat = ft_atoi(v[5]);
	else
		philo->nbr_to_max_eat = -2;
	philo->is_any_died = 0;
	philo->finish_eating = 0;
	if (philo->philo_nbr == -1 || philo->t_to_die == -1 || \
	philo->t_to_eat == -1 || philo->t_to_sleep == -1 || \
	philo->nbr_to_max_eat == -1)
		return (-1);
	if (philo->philo_nbr == 1)
		return (-2);
	return (1);
}

int	ft_import_main_struct(t_main *philo, int c, char **v)
{
	int	error_code;

	error_code = ft_import_args(philo, c, v);
	if (error_code == -1 || error_code == -2)
		return (error_code);
	ft_import_mutex(philo);
	ft_import_philos(philo);
	return (1);
}
