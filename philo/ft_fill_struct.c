/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:05:30 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/25 16:57:58 by cbolat           ###   ########.fr       */
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

int	ft_fill_struct(t_main *philo, int c, char **v)
{
	if (c == 6)
	{
		philo->nbr_to_max = ft_atoi(v[5]);
		if (philo->nbr_to_max == -1)
		{
			ft_exit("ERROR : Bad ARGUMENTS!\n");
			return (-1);
		}
	}
	philo->philo_nbr = ft_atoi(v[1]);
	philo->t_to_die = ft_atoi(v[2]);
	philo->t_to_eat = ft_atoi(v[3]);
	philo->t_to_sleep = ft_atoi(v[4]);
	if (philo->philo_nbr == -1 || \
	philo->t_to_die == -1 || \
	philo->t_to_eat == -1 || \
	philo->t_to_sleep == -1)
	{
		ft_exit("ERROR : Bad ARGUMENTS!\n");
		return (-1);
	}
	return (1);
}
