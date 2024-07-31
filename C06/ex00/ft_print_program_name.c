/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:12:19 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/24 17:12:22 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

int	main(int charc, char **charv)
{
	int	counter;

	counter = charc;
	ft_putchar(charv[0]);
	write (1, "\n", 1);
	return (0);
}
