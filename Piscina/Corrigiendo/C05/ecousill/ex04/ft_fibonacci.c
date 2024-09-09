/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecousill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:25:28 by ecousill          #+#    #+#             */
/*   Updated: 2024/07/29 15:25:30 by ecousill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
#include <stdio.h>
int	main(void)
{
	int	index = 5;

	printf("El elemento nº %d de la sucesión de Fibonacci es el %d\n",
		index, ft_fibonacci(index));
	return (0);
}
