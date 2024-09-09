/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:11:08 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/15 19:11:24 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b >= 0)
	{
	}
	else
	{
		write (1, "Error: división por cero no definida\n", 38);
	}
}

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
