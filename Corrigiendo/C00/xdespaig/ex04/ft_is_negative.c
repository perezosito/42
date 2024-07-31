/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdespaig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:08:23 by xdespaig          #+#    #+#             */
/*   Updated: 2024/07/18 19:15:39 by xdespaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 2);
	else
		write(1, "P", 2);
}

int	main(void)
{
	int	num;
	
	num = 12;
	ft_is_negative(num);


}
