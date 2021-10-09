/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: einterdi <einterdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:44:18 by einterdi          #+#    #+#             */
/*   Updated: 2021/10/09 14:14:04 by einterdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/*#include <string.h>
#include <stdio.h>
 
int main()
{
  char str[] = "Каждый хороший программист должен знать функцию memset!\n";
  printf("%s",memset(str,'_',12)); // заполнить первые 12 байт символом '_'
  printf("%s",ft_memset(str,'_',12));
  return 0;
}*/
