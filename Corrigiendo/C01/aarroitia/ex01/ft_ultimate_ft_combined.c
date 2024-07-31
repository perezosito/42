/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarroita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:08:31 by aarroita          #+#    #+#             */
/*   Updated: 2024/07/15 19:08:49 by aarroita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

void	ft_ultimate_ft(int *********nbr)
{
}

#include <stdio.h>
int	main(void)
{
	int	n = 0;
	int	*ptr1 = &n;
	int	**ptr2 = &ptr1;
	int	***ptr3 = &ptr2;
	int	****ptr4 = &ptr3;
	int	*****ptr5 = &ptr4;
	int	******ptr6 = &ptr5;
	int	*******ptr7 = &ptr6;
	int	********ptr8 = &ptr7;
	int	*********ptr9 = &ptr8;
	printf("Valor de n antes: %d\n", n);
	ft_ultimate_ft(ptr9);
	printf("Valor de n después: %d\n", n);
	return (0);
