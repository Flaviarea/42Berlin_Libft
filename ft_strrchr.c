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
	int	str_len;

	str_len = ft_strlen(str);
	while (str[str_len] != (char)c && str_len >= 0)
		str_len--;
	if ((char)c == str[str_len])
		return ((char *)&str[str_len]);
	return (NULL);
}
