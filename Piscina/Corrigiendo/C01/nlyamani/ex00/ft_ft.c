/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:23:10 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/18 18:26:37 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	num;

	num = 0;
	printf("Antes de llamar a ft_ft, num = %d\n", num);
	ft_ft(&num);
	printf("Después de llamar a ft_ft, num = %d\n", num);
	return (0);
}
