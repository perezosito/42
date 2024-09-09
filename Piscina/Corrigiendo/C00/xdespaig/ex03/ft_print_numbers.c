/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdespaig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:39:05 by xdespaig          #+#    #+#             */
/*   Updated: 2024/07/16 13:19:38 by xdespaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char o;

	o = '0';

	while (o <= '9')
	{
		write (1, &o, 1);
		o++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
