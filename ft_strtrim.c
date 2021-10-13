/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 23:15:38 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/14 00:33:28 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	char			*mem;


	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[i]))
		j--;

//	mem = (char *)malloc((sizeof(char)) * (j + 1 - i + 1));
//	if (mem == NULL)
//		return (NULL);
	mem = ft_substr(s1, i, j + 1 - i);
	return (mem);
}
