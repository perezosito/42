/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 23:35:28 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/20 23:35:31 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	des[i]='\0';
	return (*dest);
}
/*
#include <stdio.h>
int main ()
{
	int	size;
	char	src[] = "SPC_AFTER_OPERATOR   (line:  21, col:  15):after ";
	
	size = 0;
	while (src[size] != '\0')
		size++;
	
	char	dest[size+1];
	
	*dest=ft_strlcpy(src,dest,size);
	printf("%s",dest);
	}*/
