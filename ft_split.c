/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:18:04 by frea              #+#    #+#             */
/*   Updated: 2024/12/13 20:07:21 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_split: split a string into an array of words
**	Input: A string s and a delimiter c.
**  	Output: An array of strings (each representing a word) 
**  	obtained by splitting s at occurrences of c.
**  	Allocates memory for the array of strings using malloc.
**  	Return the array with a NULL pointer.
**	1-count the words in the array (tokens)
**	2-allocate memory for the array of strings 
**	3-loop through the string: skip delimiters, extract each
**	word and store it in the array, handle errors, free memory
**	4-return the array of strings. 
*/

static char	*trigger(char const *s, int trig_c)
{
	char	*str;
	int		c;
	int		i;

	c = 0;
	while (s[c] != trig_c && s[c])
		c++;
	str = (char *)malloc(c + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < c)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static int	count(char const *s, char c)
{
	int	i;
	int	trig_c;

	i = 0;
	trig_c = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (s[i])
	{
		if (s[i] != c)
		{
			trig_c++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (trig_c);
}

static char	**error_free(char **arr, int arr_c)
{
	while (--arr_c >= 0)
		free(arr[arr_c]);
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		trig_c;
	int		arr_c;

	trig_c = count(s, c);
	arr = (char **)malloc((trig_c + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr_c = 0;
	while (arr_c < trig_c)
	{
		while (*s == c)
			s++;
		arr[arr_c] = trigger(s, c);
		if (!arr[arr_c])
			return (error_free(arr, arr_c));
		s = s + ft_strlen(arr[arr_c]);
		arr_c++;
	}
	arr[arr_c] = 0;
	return (arr);
}
