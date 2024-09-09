/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:52:59 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/18 18:29:13 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start_index;
	int	end_index;
	int	temp;

	start_index = 0;
	end_index = size - 1;
	temp = 0;
	while (start_index < end_index)
	{
		temp = tab[start_index];
		tab[start_index] = tab[end_index];
		tab[end_index] = temp;
		start_index++;
		end_index--;
	}
}


void convert_number(int numero) {
    char buffer[1];
    buffer[0] = (numero % 10) + '0'; 
    write(1, buffer, 1);
}

int main (void) {
    int numeros[5] = {0,1,2,3,4};
    convert_number(numeros[1]);
    convert_number(numeros[3]);
    ft_rev_int_tab(numeros, 5);
    convert_number(numeros[1]);
    convert_number(numeros[3]);
    return (0);
}

