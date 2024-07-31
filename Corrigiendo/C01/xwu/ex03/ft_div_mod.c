/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:34:15 by xwu               #+#    #+#             */
/*   Updated: 2024/07/24 18:36:46 by xwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a == 0 || b == 0)
	{
		*div = 0;
		*mod = 0;
	}
	else
	{
		*div = a / b;
		*mod = a % b;
	}
}


int	main(void)
{
	int	dividendo = 2;
	int	divisor = 4;
	int	div;
	int	mod;
  
	ft_div_mod(dividendo, divisor, &div, &mod);
	printf("%d / %d; resultado %d y resto %d", dividendo, divisor, div, mod);
}

