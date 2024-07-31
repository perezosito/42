/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:16:53 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/18 18:29:45 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	outer_index;
	int	inner_index;
	int	temp;

	outer_index = 0;
	inner_index = 0;
	while (outer_index < size - 1)
	{
		while (inner_index < size - 1)
		{
			if (tab[inner_index] > tab[inner_index + 1])
			{
				temp = tab[inner_index];
				tab[inner_index] = tab[inner_index + 1];
				tab[inner_index + 1] = temp;
			}
			inner_index++;
		}
		inner_index = 0;
		outer_index++;
	}
}

void print_array(int *tab, int size) {
    int index = 0;
    while (index < size)
    {
        printf("%d ", tab[index]);
        index++;
    }
    
}


int main()
{
    int array[9] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
     print_array(array, 9);
    ft_sort_int_tab(array, 9);
    print_array(array, 9);
    return (0);
}
