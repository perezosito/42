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


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b >= 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		write (1, "Error: división por cero no definida\n", 38);
		*div = 0;
		*mod = 0;
	}
}

/*
#include <unistd.h>
#include <stdio.h>
int		main(void)
{
	int a = 17;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("División de %d por %d es %d con residuo %d\n", a, b, div, mod);

	return (0);
}*/
