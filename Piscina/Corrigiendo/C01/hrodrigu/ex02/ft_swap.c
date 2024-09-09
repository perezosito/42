/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 18:09:21 by hrodrigu          #+#    #+#             */
/*   Updated: 2024/07/27 13:58:41 by hrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	convert;

	convert = *a;
	*a = *b;
	*b = convert;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*a1;
	int	*b1;

	a = 10;
	b = 100;
	a1 = &a;
	b1 = &b;
	printf("before a = %d\n", a);
	printf("before b = %d\n", b);
	ft_swap(a1, b1);
	printf("after a = %d\n", a);
	printf("after b = %d\n", b);
	return (0);
}

