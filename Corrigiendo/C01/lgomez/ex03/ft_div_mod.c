/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:58:30 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/07/16 17:07:51 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int	a;
	int	b;	
	int	div;
	int	mod;

	a = 12;
	b = 5;
	if (b == 0)
	{
		printf("imposible dividir por cero");
		return (0);
	}
	ft_div_mod(a, b, &div, &mod);
	printf("División: %d, Resto: %d\n", div, mod);
	return (0);
}
