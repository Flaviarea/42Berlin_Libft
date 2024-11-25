/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:18:16 by frea              #+#    #+#             */
/*   Updated: 2024/11/22 18:18:18 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_itoa:
**	Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled
**	n: the integer to convert.
**	Returns The string representing the integer. NULL if the allocation fails.
*/

char	*ft_itoa(int n)
