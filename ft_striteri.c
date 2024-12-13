/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:19:06 by frea              #+#    #+#             */
/*   Updated: 2024/12/11 21:01:32 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_striteri:
**	Applies the function ’f’ on each character of the string passed as argument, 
**	passing its index as first argument. Each character is passed by address 
**	to ’f’ to be modified if necessary.
**	s: The string on which to iterate. f: The function to apply to each character.
**	Does not return.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
