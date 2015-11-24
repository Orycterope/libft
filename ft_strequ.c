/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 20:43:11 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/24 21:39:29 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if(s1 == NULL || s2 == NULL)
		return -1;
	while(*s1 && *s2)
	{
		if (*s1++ != *s2++)
			return (0);
	}
	return (*s1 == *s2);
}
