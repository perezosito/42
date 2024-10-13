/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miperez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 16:09:33 by miperez-          #+#    #+#             */
/*   Updated: 2024/10/13 16:09:35 by miperez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_lstadd_front.c
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (new)
    {
        new->next = *lst;
        *lst = new;
    }
}

