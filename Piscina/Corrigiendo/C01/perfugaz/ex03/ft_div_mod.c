/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perzugaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:13:18 by perzugaz          #+#    #+#             */
/*   Updated: 2024/07/18 15:13:48 by perzugaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
    int a = 12;
    int b = 10;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    printf("Para a = %d y b = %d:\n", a, b);
    printf("División: %d\n", div);
    printf("Módulo: %d\n", mod);

    return 0;
}
