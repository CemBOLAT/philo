/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:12:14 by cbolat            #+#    #+#             */
/*   Updated: 2023/04/05 15:12:16 by cbolat           ###   ########.fr       */
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
// --> uint64_t
# include <stdint.h>

typedef struct s_main	t_main;

typedef struct s_philo
{
	int				ph_id;
	pthread_t		t_id;
	int				eat_count;
	int				right_fork;
	int				left_fork;
	uint64_t		last_eat;
	t_main			*my_main;
}t_philo;

typedef struct s_main
{
	pthread_mutex_t	*forks;
	pthread_mutex_t	print;
	int				philo_nbr;
	int				fork_nbr;
	int				t_to_die;
	int				t_to_eat;
	int				t_to_sleep;
	int				nbr_to_max_eat;
	int				is_any_died;
	int				finish_eating;
	struct s_philo	*parg;
	uint64_t		start_time;
	int				error_code;
}t_main;

//	exit
void		ft_arg_err(t_main *philo, char *str);
void		ft_arg_val_err(t_main *philo);
void		ft_arg_val_err_2(t_main *philo);
//	shell print
void		ft_shell_print(t_philo *man, int flag);
//	import datas
int			ft_import_main_struct(t_main *philo, int c, char **v);
//	get_time;
uint16_t	ft_gettime(void);
void		ft_time_away(int time, t_main *philo);
//	events
void		ft_starting_events(t_main *data);
void		ft_thinking(t_philo *man);
void		ft_sleeping(t_philo *man);
void		ft_eat_meal(t_philo *man);
//	die
void		ft_is_die(t_main *data);
//	exit
void		ft_free(t_main *philo);

#endif
