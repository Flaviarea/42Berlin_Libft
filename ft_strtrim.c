/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:17:52 by frea              #+#    #+#             */
/*   Updated: 2024/11/22 18:17:54 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strtrim:
**	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.
**	s1: The string to be trimmed. set: The reference set of characters to trim.
**	Returns The trimmed string. NULL if the allocation fails.
*/

char *ft_strtrim(char const *s1, char const *set)

