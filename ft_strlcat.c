/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:37:36 by frea              #+#    #+#             */
/*   Updated: 2024/12/09 19:13:28 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strlcat:  
**	Ideal for safely concatenating strings into 
**	a fixed-size buffer while avoiding undefined 
**	behavior or overwriting memory. Appends the 
**	string 'src' to the end of 'dest', ensuring the 
**	result is always null-terminated (\0) if there’s enough space in dest.
**	It takes the total size of the destination buffer 
**	'sz' into account to prevent buffer overflows, unlike strncat.
**	'i' will track the current length of the dest string up to sz. 
**	'j' will track how many characters from src have been appended to dest.
**	It appends up to sz - strlen(dest) - 1 characters from src to 
**	dest and then adds a null terminator if space allows.
**	Returns the total length of the string it tried to create 
**	(strlen(dest) + strlen(src)), letting you know if truncation occurred 
**	(if the return value is greater than or equal to sz). If 'sz' is less 
**	than the length of 'dest', 'dest' is not null-terminated.
*/

size_t	ft_strlcat(char *dest, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (sz == 0)
		return (ft_strlen(src));
	while (dest[i] && i < sz)
		i++;
	while ((i + j + 1) < sz && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != sz)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
