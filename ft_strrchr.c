/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:37:48 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/10 21:50:12 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int j;
    char *s2;

    if (c == '\0')
        return (0);
    i = 0;
    s2 = (char *)s;
    while (s2[i] != '\0')
    {
        if (s2[i] == c)
            j = i;
        i++;      
    }
    if (j != 0)
        return (&s2[j]);
    else
        return (NULL);
}