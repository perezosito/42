/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:03:02 by hrodrigu          #+#    #+#             */
/*   Updated: 2024/07/27 18:33:28 by hrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 101;
	b = 2;
	printf("we divide a by b = %d/%d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("result = %d  \n", a);
	printf("spare = %d  \n", b);
}

