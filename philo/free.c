/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:11:45 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:11:46 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_free(t_main *philo)
{
	int	i;

	i = -1;
	while (++i < philo->philo_nbr)
		philo->parg[i].my_main = NULL;
	free(philo->parg);
	free(philo->forks);
	free(philo);
}
