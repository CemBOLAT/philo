/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:01:10 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:01:11 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo_bonus.h"

void	*ft_kill_process(void *arg)
{
	t_main	*main;
	int		i;
	int		res;

	i = -1;
	main = (t_main *)arg;
	while (1)
	{
		waitpid(-1, &res, 0);
		if (res != 0)
		{
			while (++i < main->philo_nbr)
				kill(main->pids[i], SIGKILL);
			break ;
		}
		usleep(100);
	}
	sem_close(main->forks);
	sem_close(main->print);
	sem_unlink("./forks");
	sem_unlink("./print");
	return (NULL);
}
