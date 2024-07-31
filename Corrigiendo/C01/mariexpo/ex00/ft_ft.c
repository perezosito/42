/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariexpo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 21:19:57 by mariexpo          #+#    #+#             */
/*   Updated: 2024/07/28 22:20:53 by mariexpo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	num;

	num = 0;
	printf("Before to call ft_ft, num = %d\n", num);
	ft_ft(&num);
	printf ("After to call ft_ft, num = %d\n", num);
	return (0);
}
