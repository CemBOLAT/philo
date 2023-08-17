/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:12:05 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:12:08 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_main	*philo;

	philo = (t_main *)malloc(sizeof(t_main));
	if (!philo)
		return (0);
	if (argc != 5 && argc != 6)
		ft_arg_err(philo, argv[0]);
	else
	{
		philo->error_code = ft_import_main_struct(philo, argc, argv);
		if (philo->error_code == -1)
			ft_arg_val_err(philo);
		else if (philo->error_code == -2)
			ft_arg_val_err_2(philo);
		else
		{
			ft_starting_events(philo);
			if (philo->finish_eating)
				printf("\033[1;32mCONGARTZ ! \n\033[0m");
			usleep(1000);
			ft_free(philo);
		}
	}
	return (1);
}
