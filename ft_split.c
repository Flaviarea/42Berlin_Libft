/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:18:04 by frea              #+#    #+#             */
/*   Updated: 2024/11/22 18:18:06 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_split:
**	Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.
**	s: The string to be split. c: The delimiter character.
**	Returns The array of new strings resulting from the split. NULL if the allocation fails.
*/

char **ft_split(char const *s, char c)
