/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:53:31 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/25 18:38:10 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	t_main	philo;

	if (argc == 6)
	{
		if (ft_fill_struct(&philo, argc, argv) == -1)
			return (0);
	}
	else if (argc == 5)
	{
		if (ft_fill_struct(&philo, argc, argv) == -1)
			return (0);
	}
	else
		ft_exit("Error : INVALID ARGUMENT NUMBER !\n");
	if (ft_import_philo(&philo) != 1)
	{
		ft_exit("Error :\n");
		return (0);
	}
	//system("leaks philo");
	free(philo.parg);
	return (1);
}
