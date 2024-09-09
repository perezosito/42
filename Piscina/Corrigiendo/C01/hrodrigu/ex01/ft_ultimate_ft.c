/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:07:07 by hrodrigu          #+#    #+#             */
/*   Updated: 2024/07/25 17:12:05 by hrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>

int	main(void)
{
	int	p;
	int	*p1;
	int 	**p2;
	int	***p3;
	int	****p4;
	int	*****p5;
	int	******p6;
	int	*******p7;
	int	********p8;
	int	*********p9;
	p = 100;
	p9 = &p8;
	p8 = &p7;
	p7 = &p6;
	p6 = &p5;
	p5 = &p4;
	p4 = &p3;
	p3 = &p2;
	p2 = &p1;
	p1 = &p;
	printf("before p = %d\n", p);	
	ft_ultimate_ft(p9);
	printf("after p = %d\n", p);
	return (0);
}

