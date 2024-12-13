/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:17:34 by frea              #+#    #+#             */
/*   Updated: 2024/12/11 21:01:14 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strjoin: join two strings in a new one
**	Allocates (with malloc(3)) and returns a 
**	new string, which is the result of the concatenation of ’s1’ and ’s2’.
**	s1: The prefix string. s2: The suffix string.
**	returns the new string. NULL if the allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new;
	size_t		len1;
	size_t		len2;

	if (!(s1 && s2))
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2); 
	new = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new) 
		return (NULL); 
	ft_strlcpy(new, s1, len1 + 1);
	ft_strlcpy(new + len1, s2, len2 +1);
	return (new);
}
