/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:37:07 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:37:08 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_memmove: memory move
**	Safely copies memory, handling overlapping 
**	regions by copying in reverse (end-to-start) when 'dest' > 'src'.
**	Pointer Casting: Casts 'dest' and 'src' to char * for byte-wise operations.
**	Reverse Copy: Uses a backward loop 
**	to prevent overwriting source data if regions overlap.
**	Forward Copy: Delegates to ft_memcpy when no overlap is detected.
**	Always returns a pointer to 'dest' 
*/

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = (char *) dest;
	src_ptr = (const char *) src;
	if (dest > src)
	{
		while (length > 0)
		{
			length--;
			dest_ptr[length] = src_ptr[length];
		}
	}
	else
		ft_memcpy(dest, src, length);
	return (dest);
}
