/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:58:49 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/24 14:09:56 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while(n--)
	{
		*(char *)dst++ = *(char *)src++;
		if (*((char *)dst - 1) == (unsigned char) c)
			return (dst);
	}
	return (NULL);
}
