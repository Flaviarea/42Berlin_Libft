/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:23:09 by frea              #+#    #+#             */
/*   Updated: 2024/11/18 14:23:11 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_toupper:
**	Converts a lowercase letter 'c' to its uppercase equivalent.
**	If 'c' is not a lowercase letter, it is returned unchanged.
*/

int	ft_tolower(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
