/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:58:49 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/26 16:22:35 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while(n--)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src++;
		if (*((unsigned char *)dst - 1) == (unsigned char) c)
			return (dst);
	}
	return (NULL);
}
