/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:18:04 by frea              #+#    #+#             */
/*   Updated: 2024/12/03 19:26:36 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	ft_split: split a string into an array of words
**	Input: A string s and a delimiter c.
**  Output: An array of strings (each representing a word) 
**  obtained by splitting s at occurrences of c.
**  Allocates memory for the array of strings using malloc.
**  Return the array with a NULL pointer.
*/

char **ft_split(char const *s, char c)
