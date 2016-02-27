/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_chr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <tvermeil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 18:38:33 by tvermeil          #+#    #+#             */
/*   Updated: 2016/02/27 18:41:10 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew_chr(size_t size, unsigned char c)
{
	char	*str;
	size_t	i;

	str = (char*)malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (c < size)
		str[i++] = c;
	str[i] = '\0';
	return (str);
}
