/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:53:44 by cbolat            #+#    #+#             */
/*   Updated: 2023/02/25 17:05:45 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

// --> printf
# include <stdio.h>
// --> write usleep
# include <unistd.h>
// --> malloc free
# include <stdlib.h>
// --> memset
# include <string.h>
// --> pthread_x
# include <pthread.h>
// --> gettimeofday
# include <sys/time.h>

typedef struct s_philo
{
	int			ph_id;
	pthread_t	t_id;
	int			h_m_eat;
}t_philo;

typedef struct s_main
{
	int			philo_nbr;
	int			t_to_die;
	int			t_to_eat;
	int			t_to_sleep;
	int			nbr_to_max;
	struct s_philo *parg;
}t_main;

//	exit
void	ft_exit(char *str);
//	fill struct
int		ft_fill_struct(t_main *philo, int c, char **v);
int		ft_import_philo(t_main *philo);

#endif
