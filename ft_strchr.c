/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:03:13 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/24 16:12:42 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while(*s)
		if(*s++ == (unsigned char) c)
			return ((char *)s - 1);
	return ((unsigned char) c == '\0' ? (char*)s : NULL);
}
