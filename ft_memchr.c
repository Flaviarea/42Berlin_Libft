/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:38:41 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:38:42 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memchr: locate byte in byte string
**	Searches for the first occurrence of the byte 'c' in the first 'sz' bytes 
**	of the memory area pointed to by 's'. Returns a pointer to the matching 
**	byte or NULL if 'c' is not found.
*/
void	*ft_memchr(const void *s, int c, size_t sz)
{
	size_t	i;

	i = 0;
	while (i < sz)
	{
		if (((unsigned char *)s)[i] == (const unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
