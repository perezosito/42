/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farias <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:55:24 by farias            #+#    #+#             */
/*   Updated: 2024/07/17 15:10:51 by farias           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	flag;
	int	temp;

	flag = 1;
	while (flag != 0)
	{
		flag = 0;
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab [i + 1];
				tab[i + 1] = temp;
				flag = 1;
			}
			i++;
		}
	}
}
