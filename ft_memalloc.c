/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:14:02 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/23 16:55:30 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	short	*ptr;
	size_t	c;

	ptr = (short*) malloc(size);
	if (ptr == NULL)
		return (0);
	c = 0;
	while (c <= size)
		ptr[c++] = 0;
	return ((void*)ptr);
}
