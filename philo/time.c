/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:41:17 by cbolat            #+#    #+#             */
/*   Updated: 2023/03/12 18:06:41 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

uint16_t	ft_gettime(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * (uint64_t)1000) + (time.tv_usec / 1000));
}

void	ft_time_away(int time, t_main *philo)
{
	u_int64_t	start;

	start = ft_gettime();
	while (philo->is_any_died == 0)
	{
		if (ft_gettime() - start >= (unsigned long long)time)
			break ;
		usleep(40);
	}
}
