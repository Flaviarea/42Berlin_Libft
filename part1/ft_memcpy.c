/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:36:54 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:36:56 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memcpy: memory copy
**	copy a block of memory from one location 'src' to another 'dest' for a specified number 
**	of bytes 'length'. It assumes the memory regions do not overlap.
*/

void	*ft_memcpy(void *dest, const void *src, size_t length)
{
	size_t		i;
	char		*dest_ptr;
	const char	*src_ptr;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest_ptr = (char *) dest;
	src_ptr = (const char *) src;
	while (i < length)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
