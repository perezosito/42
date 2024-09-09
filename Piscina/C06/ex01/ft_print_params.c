/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:12:19 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/24 17:38:16 by miperez-         ###   ########.fr       */
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

	counter = 1;
	while (counter < charc)
	{
		ft_putchar(charv[counter]);
		write (1, "\n", 1);
		counter++;
	}
	return (0);
}
