/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:18:43 by frea              #+#    #+#             */
/*   Updated: 2024/12/12 14:35:46 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strmapi:
**	Applies the function f to each character of the string s, passing 
**  its index as the first argument and the character itself as the second. 
**  A new string is created (using malloc(3)) to collect the results from the 
**  successive applications of 'f'.
**	s: The string on which to iterate. f: The function to apply to each character.
**	Returns The string created from the successive applications of ’f’. Returns 
**  NULL if the allocation fails.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str_f;
	size_t	i;

	str_f = ft_strdup(s);
	if (!str_f)
		return (NULL);
	i = 0;
	while (str_f[i])
	{
		str_f[i] = (*f)(i, str_f[i]);
		i++;
	}
	return (str_f);
}
