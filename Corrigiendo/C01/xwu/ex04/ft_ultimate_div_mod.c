/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:37:47 by xwu               #+#    #+#             */
/*   Updated: 2024/07/24 18:40:55 by xwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}


int	main(void)
{
	int	dividendo = 89;
	int	divisor = 26;

	printf("%d / %d\n", dividendo, divisor);
	ft_ultimate_div_mod(&dividendo, &divisor);
	printf("cociente: %d, resto: %d", dividendo, divisor);
}

