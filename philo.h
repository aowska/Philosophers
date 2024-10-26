/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awacowsk <awacowsk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 16:05:41 by awacowsk          #+#    #+#             */
/*   Updated: 2024-10-26 16:05:41 by awacowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>
# include <stdbool.h>


typedef struct s_stack_philo_info
{
	int			philo_amount;
	size_t		time_to_die;
	size_t		time_to_eat;
	size_t		time_to_sleep;

}	t_philo_info;

typedef struct s_stack_philo
{
	int				philo_index;
	size_t			thinking_time;
	size_t			eating_time;
	size_t			sleeping_time;
	bool			l_fork;
	bool			r_fork;
	t_philo_info	*info;

}	t_philo;



#endif
