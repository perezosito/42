/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlyamani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:38:20 by nlyamani          #+#    #+#             */
/*   Updated: 2024/07/28 19:10:01 by nlyamani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "common_utils.h"
#include <stdio.h>

char	*g_below_twenty[] = {
	"Noll", "Ett", "Två", "Tre", "Fyra", "Fem", "Sex", "Sju",
	"Åtta", "Nio", "Tio", "Elva", "Tolv", "Tretton", "Fjorton",
	"Femton", "Sexton", "Sjutton", "Arton", "Nitton"
};
char	*g_tens[] = { 
	"", "", "Tjugo", "Trettio", "Fyrtio", "Femtio",
	"Sextio", "Sjuttio", "Åttio", "Nittio"
};
char	*g_thousands[] = {
	"", "Tusen", "Miljon", "Miljard", "Biljon",
	"Biljard", "Triljon", "Triljard", "Kvadriljon", "Kvadriljard",
	"Kvintiljon", "Kvintiljard", "Sextiljon"
};

void	convert_hundreds(int num, char *res)
{
	if (num >= 100)
	{
		mein_strcat(res, g_below_twenty[num / 100]);
		mein_strcat(res, " Hundra ");
		num %= 100;
	}
	if (num >= 20)
	{
		mein_strcat(res, g_tens[num / 10]);
		mein_strcat(res, " ");
		num %= 10;
	}
	if (num > 0)
	{
		mein_strcat(res, g_below_twenty[num]);
		mein_strcat(res, " ");
	}
}

void	number_to_words(long long int n, char *result)
{
	int	chunk_count;

	chunk_count = 0;
	while (n > 0)
	{
		int	chunk;
		
		chunk = n % 1000;
		if (chunk > 0) 
		{
			char chunk_str[100] = "";
			convert_hundreds(chunk, chunk_str);
			if (g_thousands[chunk_count][0] != '\0') 
			{
				mein_strcat(chunk_str, g_thousands[chunk_count]);
				mein_strcat(chunk_str, " ");
			}
			char temp[1000];
			mein_strcpy(temp, result);
			mein_strcpy(result, chunk_str);
			mein_strcat(result, temp);
		}
		n /= 1000;
		chunk_count++;
	}
}
