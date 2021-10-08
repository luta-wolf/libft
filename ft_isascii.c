/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:44:00 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/08 12:05:27 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return c;
    else
        return 0;
}