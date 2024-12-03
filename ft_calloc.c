/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:12:03 by frea              #+#    #+#             */
/*   Updated: 2024/11/18 16:12:05 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_calloc:
**	Allocates memory for an array of 'nbr' elements of 'size' bytes each, 
**	initializes all bytes to 0, and returns a pointer to the allocated memory.
*/

void	*calloc(size_t elements, size_t size)
{
	void	*ptr;

	ptr = malloc(elements * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, elements * size);
	return (ptr);
}
