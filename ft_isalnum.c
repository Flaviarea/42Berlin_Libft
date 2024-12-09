/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frea <frea@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:41:47 by frea              #+#    #+#             */
/*   Updated: 2024/12/09 19:01:44 by frea             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* checks for an alphanumeric character; 
** it is equivalent to (isalpha(c) || isdigit(c)).
*/

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
