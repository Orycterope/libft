/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:41:11 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/26 17:01:33 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	char	*ptr;

	if(s1 == NULL || s2 == NULL)
		return(0);
	if(size <= ft_strlen(s1))
		return (ft_strlen(s1) + size);
	ptr = s1;
	while(*ptr && (size_t)(ptr - s1 + 1) < size)
		ptr++;
	while(*s2 && (size_t)(ptr - s1 + 1) < size)
		*ptr++ = *s2++;
	return (ft_strlen(s1) + ft_strlen(s2));
}
