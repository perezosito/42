/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:02:44 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/07/18 17:22:19 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	aux = 0;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = aux;
		i++;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7};
	int	size;
	int	j;

	//tab[] = {1, 2, 3, 4, 5, 6, 7};
	j = 0;
	size = sizeof (tab) / sizeof (tab[0]);
	ft_rev_int_tab(tab, size);
	printf ("array al reves:");
	while (j < size)
	{
		printf ("%i,", tab[j]);
		j++;
	}
	return (0);
}
