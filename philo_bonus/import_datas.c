/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   import_datas.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:01:05 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:01:06 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

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

	i = 0;
	philo->parg = (t_philo *)malloc(sizeof(t_philo) * philo->philo_nbr);
	while (i < philo->philo_nbr)
	{
		philo->parg[i].ph_id = i + 1;
		philo->parg[i].my_main = philo;
		philo->parg[i].eat_count = 0;
		i++;
	}
}

int	ft_import_semaphore(t_main *philo)
{
	sem_unlink("./print");
	sem_unlink("./forks");
	philo->forks = sem_open("./forks", O_CREAT, S_IRWXG, philo->philo_nbr);
	philo->print = sem_open("./print", O_CREAT, S_IRWXG, 1);
	if (philo->forks == SEM_FAILED || philo->print == SEM_FAILED)
		return (-3);
	return (0);
}

int	ft_import_main_struct(t_main *philo, int c, char **v)
{
	philo->philo_nbr = ft_atoi(v[1]);
	philo->t_to_die = ft_atoi(v[2]);
	philo->t_to_eat = ft_atoi(v[3]);
	philo->t_to_sleep = ft_atoi(v[4]);
	philo->fork_nbr = philo->philo_nbr;
	philo->start_time = ft_gettime();
	if (c == 6)
		philo->nbr_to_max_eat = ft_atoi(v[5]);
	else
		philo->nbr_to_max_eat = -2;
	philo->is_any_died = 0;
	if (philo->philo_nbr == -1 || philo->t_to_die == -1 || \
	philo->t_to_eat == -1 || philo->t_to_sleep == -1 || \
	philo->nbr_to_max_eat == -1)
		return (-1);
	if (philo->philo_nbr == 1)
		return (-2);
	ft_import_philos(philo);
	if (ft_import_semaphore(philo) == -3)
		return (-3);
	return (1);
}
