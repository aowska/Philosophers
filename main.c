/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awacowsk <awacowsk@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 16:05:34 by awacowsk          #+#    #+#             */
/*   Updated: 2024-10-26 16:05:34 by awacowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void *count_to_100(void *arg)
{
	(void)arg;

	for (int i = 0; i < 100; i++)
		;
	printf("The count has finished\n");
	return (NULL);
}

void *print_hello(void *arg)
{
	(void)arg;

	for (int i = 0; i < 10; i++)
		printf("Hello, world!\n");
	return (NULL);
}

void *philo_init(t_philo	*info, char **av)
{


}

int main(int ac, char **av)
{
	t_philo		info;
	pthread_t	thread_1;
	pthread_t	thread_2;

	if (ac < 5 && ac > 6)
		return (1);

	philo_init(&info, av);


	pthread_create(&thread_1, NULL, count_to_100, NULL);
	pthread_create(&thread_2, NULL, print_hello, NULL);
	pthread_join(thread_1, NULL);
	pthread_join(thread_2, NULL);
	return (0);
}
