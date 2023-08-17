/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:53:44 by cbolat            #+#    #+#             */
/*   Updated: 2023/03/22 19:30:09 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_BONUS_H
# define PHILO_BONUS_H

// --> printf
# include <stdio.h>
// --> write usleep fork
# include <unistd.h>
// --> malloc free exit
# include <stdlib.h>
// --> memset
# include <string.h>
// --> pthread_x
# include <pthread.h>
// --> gettimeofday
# include <sys/time.h>
// --> kill
# include <signal.h>
// waitpid
# include <sys/wait.h>
# include <sys/types.h>
// sem_x
# include <semaphore.h>

typedef struct s_main	t_main;

typedef struct s_philo
{
	int				ph_id;
	int				eat_count;
	uint64_t		last_eat;
	t_main			*my_main;
}t_philo;

typedef struct s_main
{
	sem_t			*forks;
	sem_t			*print;
	int				philo_nbr;
	int				fork_nbr;
	int				t_to_die;
	int				t_to_eat;
	int				t_to_sleep;
	int				nbr_to_max_eat;
	int				is_any_died;
	struct s_philo	*parg;
	uint64_t		start_time;
	pid_t			*pids;
	pthread_t		t_id;
	pthread_t		died;
	int				error_code;
}t_main;

//	exit
void		ft_arg_err(t_main *philo, char *str);
void		ft_arg_val_err(t_main *philo);
void		ft_arg_val_err_2(t_main *philo);
void		ft_arg_val_err_3(t_main *philo);
//	shell print
void		ft_shell_print(t_philo *man, int flag);
//	import datas
int			ft_import_main_struct(t_main *philo, int c, char **v);
//	get_time;
uint16_t	ft_gettime(void);
void		ft_time_away(int time, t_main *philo);
//	events
void		ft_create_process(t_main *data, int i);
void		ft_thinking(t_philo *man);
void		ft_sleeping(t_philo *man);
void		ft_eat_meal(t_philo *man);
//	die
void		*ft_is_die(void *arg);
void		*ft_kill_process(void *arg);
//	exit
void		ft_exit(char *str, t_main *philo);
void		ft_free(t_main *philo);

#endif
