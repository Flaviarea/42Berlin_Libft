/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:17:52 by frea              #+#    #+#             */
/*   Updated: 2024/12/11 20:59:06 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strtrim:
**	Allocates (with malloc(3)) and returns a copy of ’s1’ 
**  with the characters specified in ’set’ removed from the 
**  beginning and the end of the string.
**	s1: The string to be trimmed. set: The reference set of 
**  characters to trim.
**	Returns The trimmed string. NULL if the allocation fails.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = 0;
	while (start < end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
