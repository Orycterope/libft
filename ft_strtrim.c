/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 22:19:22 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/24 22:55:31 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*get_first(char const *s)
{
	while(*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	printf("First : '%c' at %p\n", *s, s);
	return ((char *)s);
}

char	*get_last(char const *s)
{
	const char	*start;

	start = s;
	while(*s)
		s++;
	while(*s == ' ' || *s == '\t' || *s == '\n' || *s == '\0' || s == start)
		s--;
	printf("last : '%c' at %p\n", *s, s);
	return ((char *)s);
}

char	*ft_strtrim(char const *s)
{
	char	*start;
	char	*end;
	char	*trim;
	size_t	parser;
	
	if(s == NULL)
		return (NULL);
	start = get_first(s);
	end = get_last(s);
	printf("length : '%ld'\n", end - start);
	trim = (char *)malloc(sizeof(char) * (end - start));
	if(trim == NULL)
		return (NULL);
	parser = -1;
	while(++parser <= (size_t)(end - start))
		trim[parser] = start[parser];
	trim[++parser] = '\0';
	return(trim);
}
