/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 14:10:25 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/12 14:10:35 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	num;
	num = '0';
	while (num <='9')
	{
		write(1, &num, 1);
		num++;
	}
}


int	main(void)
{
	ft_print_numbers();
	return (0);
}
