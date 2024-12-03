/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:36:34 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:36:36 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memset: set a block of memory 
**	3 arguments: 's' is a pointer to the 
**	block of memory to be filled with the 
**	given value 'c', for the specific number of bytes 'length'.
**	Returns a pointer to the memory area 'str'.
*/

void	*ft_memset(void *s, int c, size_t length)
{
	size_t			i;
	unsigned char	*str;

	if (s == NULL)
		return (NULL);
	str = (unsigned char *)s;
	i = 0;
	while (i < length)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
