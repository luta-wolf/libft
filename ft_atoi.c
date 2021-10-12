/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 22:21:48 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/13 00:23:24 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int n;
    int flag;

    i = 0;
    n = 0;
    flag = 1;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' 
        || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
        i++;
    if (str[i] == '-')
        flag = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (ft_isdigit(str[i]))
        {
            n = n * 10 + str[i] - '0';
            i++;
        }           
    return (n * flag);
}