/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:04:15 by hrodrigu          #+#    #+#             */
/*   Updated: 2024/07/27 18:00:53 by hrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>

int	main(void)
{

	int	a;
	int	b;
	int	div;
	int	mod;
	a = 10;
	b = 2;
	
	printf("we divide a by b = %d/%d \n",a,b);
	
	
	ft_div_mod(a, b, &div, &mod);


	printf("result = %d  \n", div);
	
	printf("spare = %d  \n", mod);
}
