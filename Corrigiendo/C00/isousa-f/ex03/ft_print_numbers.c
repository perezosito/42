/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:34:49 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/17 15:43:32 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

////Includes library containing the write function
#include <unistd.h>

//Displays the digits 0 to 10 on the console
void	ft_print_numbers(void)
{
	char	number_to_char;
	int		number;

	number = 0;
	while (number < 11)
	{
		number_to_char = '0' + number;
		write(1, &number_to_char, 1);
		number++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
