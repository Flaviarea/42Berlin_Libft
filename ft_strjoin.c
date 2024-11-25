/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:17:34 by frea              #+#    #+#             */
/*   Updated: 2024/11/22 18:17:36 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strjoin:
**	Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
**	s1: The prefix string. s2: The suffix string.
**	returns The new string. NULL if the allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
