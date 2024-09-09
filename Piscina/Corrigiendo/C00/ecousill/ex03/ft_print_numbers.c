/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:26:05 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/12 10:32:34 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	start;
	char	end;

	start = '0';
	end = '9';
	while (start <= end)
	{
		write(1, &start, 1);
		start++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
