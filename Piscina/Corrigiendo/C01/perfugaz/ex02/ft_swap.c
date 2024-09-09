/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: perzugaz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:18:54 by perzugaz          #+#    #+#             */
/*   Updated: 2024/07/20 10:35:46 by perzugaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
int main()
{
    int num1 = 5;
    int num2 = 10;

    printf("Antes de ft_swap: num1 = %d, num2 = %d\n", num1, num2);
    ft_swap(&num1, &num2);
    printf("Después de ft_swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
