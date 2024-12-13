/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:38:56 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:38:57 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memcmp: compare byte string
**	Compares the first 'n' bytes of memory areas pointed to by 's1' and 's2'. 
**	Both strings are assumed to be n bytes long.
**	Returns zero if the two strings are identical, otherwise returns 
**	the difference between the first two differing bytes. 
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = (unsigned char *) s1;
	src = (unsigned char *) s2;
	while (n > 0)
	{
		if (*dest != *src)
			return (*dest - *src);
		dest++;
		src++;
		n--;
	}
	return (0);
}
