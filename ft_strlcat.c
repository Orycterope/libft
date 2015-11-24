/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:41:11 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/24 17:38:04 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	char	*ptr;

	ptr = s1;
	while(*ptr && (size_t)(ptr - s1 + 1) < size)
		ptr++;
	while(*s2 && (size_t)(ptr - s1 + 1) < size)
		*ptr++ = *s2++;
	//*ptr = '\0';
	return (ft_strlen(s1) + ft_strlen(s2));
}
