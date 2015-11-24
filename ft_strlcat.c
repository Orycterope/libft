/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:41:11 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/24 16:59:18 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t size)
{
	char	*ptr;

	ptr = ft_strchr(s1, '\0');
	while(*s2 && size-- - 1)
		*ptr++ = *s2++;
	//*ptr = '\0';
	return (ptr - s1 - 1);
}
