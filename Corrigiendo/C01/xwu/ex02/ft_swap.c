/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 14:53:03 by xwu               #+#    #+#             */
/*   Updated: 2024/07/20 16:36:40 by xwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


int	main(void)
{
	int	x = 42;
	int	y = 26;
	
	x = 42;
	y = 26;
	printf("Número 1 es %d y número 2 es %d \n", x, y);
	ft_swap(&x, &y);
	printf("Número 1 es %d y número 2 es %d", x, y);
	return(0);
}

