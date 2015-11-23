/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:18:15 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/23 19:20:42 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		c;

	str = (char *) malloc(sizeof(char) * ft_strlen(s));
	if (str == NULL)
		return(NULL);
	c = 0;
	while(*s)
		str[c++] = (*f)(*s++);
	return (str);
}
