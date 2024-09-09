/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gnaveran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:04:15 by gnaveran          #+#    #+#             */
/*   Updated: 2024/07/17 17:06:40 by gnaveran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			dest[i] = '\0';
	}
	return (dest);
}

#include <stdio.h>
int	main()
{
	char	scr[18]={'g','a','m','u','s','i','n','o','_','e','l','m','o'};
	char	dest[18];
	
	
	ft_strcpy(dest , scr);
	printf("%s", dest);
}
