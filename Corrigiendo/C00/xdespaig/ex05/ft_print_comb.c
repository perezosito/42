/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdespaig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:20:55 by xdespaig          #+#    #+#             */
/*   Updated: 2024/07/18 19:22:23 by xdespaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_comb(void)
{
  int i, j, k;

  for (i = 0; i < 10; i++) 
  {
    for (j = 0; j < 10; j++) 
    {
      for (k = 0; k < 10; k++) 
      {
        write(1, &"0123456789"[i], 1);
        write(1, &"0123456789"[j], 1);
        write(1, &"0123456789"[k], 1);
        if (!(i == 7 && j == 8 && k == 9)) 
	{
          write(1, ", ", 2);
        }
      }
    }
  }
}
#include <unistd.h>

int	main(void)
{
	ft_print_comb();
	return 0;
}

