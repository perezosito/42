/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isousa-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:02:33 by isousa-f          #+#    #+#             */
/*   Updated: 2024/07/24 16:08:06 by isousa-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Counts the number of characters of a string received by parameter
 * and returns the number */
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
// Vessión alternativa que controla los caracteres UNICODE-8 (latinos)
/* while (*str != '\0')
        {
                if ((*str & 0xC0)!= 0x80)
                {
                        count++;
                }
                str++;
        }
*/

#include <stdio.h>

int	main(void)
{	
	char	*str = "Hola";

	printf("La palabra \"%s\" contiene %d caracteres\n", str, ft_strlen(str));
	return(0);
}
