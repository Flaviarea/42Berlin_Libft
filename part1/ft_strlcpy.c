/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:37:24 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:37:26 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strlcpy: string copy / efficient when don't know how big the string is
**	the 'l' in strcpy means the lenght of 'src'.
**	Copies a string from 'src' to 'dest'. 
**	It makes sure the copied string in dest ends with null terminator, so it’s always a properly ended string.
**	It only copies up to 'sz' - 1 characters, leaving space for the \0 character at the end, making sure the destination buffer isn’t overrun.
**	If 'sz' is 0, 'dest' is not modified and the function return the lenght of 'src'.
**	If the return value is >= 'dest', the output string has been truncated and add a \0.
**	Returns the total length of 'src'. 
*/

size_t	ft_strlcpy(char *dest, const char *src, size_t sz)
{
	size_t		i;
	
	i = 0;
	if (sz <= 0)
		return (ft_strlen(src));
	while (src[i] && i < (sz - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

