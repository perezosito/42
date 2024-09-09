/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:40:53 by xwu               #+#    #+#             */
/*   Updated: 2024/07/19 14:44:49 by xwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


int	main(void)
{
	int	number;
	int	*ptr = &number;
	int	**ptr1 = &ptr;
	int	***ptr2 = &ptr1;
	int	****ptr3 = &ptr2;
	int	*****ptr4 = &ptr3;
	int	******ptr5 = &ptr4;
	int	*******ptr6 = &ptr5;
	int	********ptr7 = &ptr6;
	int	*********ptr8 = &ptr7;
	ft_ultimate_ft(ptr8);
	printf("Se ha almacenado el número %d mediante punteros", number);
	return 0;
}

