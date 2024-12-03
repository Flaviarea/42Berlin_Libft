/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:38:12 by frea              #+#    #+#             */
/*   Updated: 2024/12/03 19:26:35 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_strrchr:
**	Locates the last occurrence of the character 'c' 
**	in the string 'str'.
**	Returns a pointer to the last occurrence of 'c' 
**	in 'str' or NULL if 'c' is not found.
*/
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return ((char *)&str[ft_strlen(str)]);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]); 
		i++;
	}
	return (NULL);
}
