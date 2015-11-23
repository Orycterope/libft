/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:23:56 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/23 19:42:33 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	c;

	str = (char *) malloc(sizeof(char) * ft_strlen(s));
	if (str == NULL)
		return(NULL);
	c = 0;
	while(*s)
	{
		str[c] = (*f)(c, *s++);
		c++;
	}
	return (str);
}
