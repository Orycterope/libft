/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvermeil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:45:47 by tvermeil          #+#    #+#             */
/*   Updated: 2015/11/25 20:04:54 by tvermeil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>   //

void    print_memory(const void *addr, size_t size); //

int		ft_wordnbr(char const *s, char c)
{
	int	words;
	
	words = 1;
	while(*++s)
		if(*s == c && *(s - 1) != c)
			words++;
	if(words == 1)
		words++;
	printf("number of words : %d\n", words);
	return (words);
}

int		ft_wordlen(char const *s, char c)
{
	int len;

	len = 1;
	while(*s == c && *s != '\0')
		s++;
	while(*s != c && *s++ != '\0')
		len++;
	printf("length : %d chars\n", len);
	return(len);
}

char	*ft_cpyword(char const *s, char c)
{
	char	*wordstart;
	char	*parser;

	while(*s == c)
		s++;
	wordstart = (char *)malloc(sizeof(char) * ft_wordlen(s, c));
	if(wordstart == NULL)
		return (NULL);
	if(*s == 0)
	{
		*wordstart = 0;
		return (wordstart);
	}
	parser = wordstart;
	while(*s != c && *s != 0)
	{
		printf("copying %c\n", *s);
		*parser++ = *s++;
	}
	*parser = '\0';
	return (wordstart);
}

char	*ft_nextword(char const *s, char c)
{
	while(*s == c && *s != 0)
		s++;
	while(*s != c && *s != 0)
		s++;
	return ((char *)s);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*word;
	int		i;

	if(s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char*) * ft_wordnbr(s, c));
	if(tab == NULL)
		return (NULL);
	i = 0;
	while(*s || i == 0)
	{
		ft_putchar('a');
		word = ft_cpyword(s, c);
		printf("got %p -> '%s'\n", word, word);
		ft_putchar('b');
		if(word == NULL)
			return (NULL);
		tab[i++] = word;
		ft_putchar('c');
		s = ft_nextword(s, c);
	}
	tab[i] = NULL;
	printf("ret %d, ret0 %d\n", tab == NULL, tab[0] != NULL);
	return (tab);
}
