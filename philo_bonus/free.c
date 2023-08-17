/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:01:01 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:01:02 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	ft_free(t_main *philo)
{
	free(philo->parg);
	free(philo->pids);
	free(philo);
}

void	ft_exit(char *str, t_main *philo)
{
	ft_free(philo);
	printf("%s\n", str);
	exit(0);
}
