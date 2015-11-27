/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:16:19 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/27 15:45:51 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *dst;

	dst = (char *)malloc(sizeof(char) * ft_strlen(s1));
	if (dst == NULL)
		return (NULL);
	return (ft_strcpy(dst, s1));
}
