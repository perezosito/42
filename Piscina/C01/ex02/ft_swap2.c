/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:33:57 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/11 23:34:00 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int	main(void)
{
	int x = 5;
	int y = 10;

	printf("Antes del intercambio: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("Después del intercambio: x = %d, y = %d\n", x, y);

	return (0);
}
