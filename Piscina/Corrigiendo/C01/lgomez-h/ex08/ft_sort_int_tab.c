/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomez-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:47:22 by lgomez-h          #+#    #+#             */
/*   Updated: 2024/07/17 21:22:29 by lgomez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = size - 1;
		while (j > i)
		{
			if (tab[i] < tab[j])
			{
				j--;
			}
			else
			{
				aux = tab[i];
				tab[i] = tab[j];
				tab[j] = aux;
				j--;
			}
		}
		i++;
	}
}

int	main(void)
{
        int tab[] = {8 ,7 ,6 ,1 ,9 ,2 ,7 };
        int size;
        int k=0;

        size = sizeof(tab) / sizeof(tab[0]);
        ft_sort_int_tab(tab,size);
        printf("array ordenado:");
        while(k < size)
        {
          printf("%i,",tab[k]);
          k++;
        }
return (0);
}
