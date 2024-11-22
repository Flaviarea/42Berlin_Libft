/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:39:43 by frea              #+#    #+#             */
/*   Updated: 2024/11/20 15:39:45 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strdup:string duplicate
**	Creates a duplicate of the string 'str'.
**	Allocates memory for the duplicate string including the null terminator,
**	copies the content of 'str' into the newly allocated memory, and returns a pointer
**	to the duplicated string.
**	Returns NULL if memory allocation fails.
*/

char	*ft_strdup(const char *str)
{
	size_t	dup_sz;
	char	*dup_str;

	dup_sz = ft_strlen(str) + 1;
	dup_str = (char *)malloc(dup_sz);
	if (!dup_str)
		return (NULL);
	ft_memcpy(dup_str, str, dup_sz);
	return (dup_str);
}
