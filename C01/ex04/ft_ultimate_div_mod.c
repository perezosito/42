/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divv_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 23:41:29 by miperez-          #+#    #+#             */
/*   Updated: 2024/07/11 23:41:34 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 17;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("División de 'a' entre 'b' es %d con residuo %d\n", a, b);
	return (0);
}*/
