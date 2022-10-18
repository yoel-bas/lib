/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:51:54 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/13 14:53:24 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	i = 0;
	if( n == 0)
		return((char *)s1);
	while(i < n)
	{
		j = 0;
		while(s1[i + j] == s2[j] && s1[i] != '\0' && s2[j] != '\0' && i + j < n)
			j++;
		if(j == ft_strlen(s2))
			return((char *)s1 + i);
			i++;
	}
	return(0);
}
int main()
{
	char *s1 = "yakmakhssekzebbafikrekzebal9lawi";
	char *s2 = "zebbafikrek";
	// size_t max = ft_strlen(s2) ;
	char *i1 = strnstr(s1, s2, 50);
	char *i2 = ft_strnstr(s1, s2, 50);
	printf("%s\n ",i2);
	printf("%s",i1);

}
