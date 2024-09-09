/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:19:01 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/07/16 19:27:35 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	if (*b != 0)
	{
		temp_div = *a / *b;
		temp_mod = *a % *b;
		*a = temp_div;
		*b = temp_mod;
	}
	else
	{
		printf("Error: División por cero no permitida.\n");
	}
}
	int	main(void)
{
	int a;
	int b;
	
	a = 10;
	b = 3;
	printf("Antes: a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Después: a = %d, b = %d\n", a, b);
	return (0);
}
