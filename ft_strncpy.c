/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:39:20 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/24 15:48:05 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*dst_cp;
	int		is_finished;
	
	dst_cp = dst;
	is_finished = 0;
	while(n--)
	{
		if(is_finished)
			*dst++ = '\0';
		else
		{
			*dst++ = *src++;
			if (*dst == '\0')
				is_finished = 1;
		}
	}
	return (dst_cp);
}
