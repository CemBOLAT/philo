/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_import_philo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:38:57 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/25 18:37:05 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_import_philo(t_main *philo)
{
	int	i;

	i = -1;
	philo->parg = (t_philo *)malloc(sizeof(t_philo) * philo->philo_nbr);
	if (!philo->parg)
		return (-1);
	while (++i < philo->philo_nbr)
	{
		philo->parg->ph_id = i;
		if (philo->nbr_to_max != 0)
			philo->parg->h_m_eat = philo->nbr_to_max;
		printf("%d %d\n", philo->parg->ph_id, philo->parg->h_m_eat);
	}
	return (1);
}
