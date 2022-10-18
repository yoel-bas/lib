/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:20:57 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/17 11:20:59 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(const char* s1, const char* s2)
{
    char *str1;
    char *str2;
    int i;
    int j;
    char *hello;
    if(!s1 || !s2)
        return(NULL);
    str1 = (char *)s1;
    str2 = (char *)s2;
    i = 0;
    j = 0;
    hello =(char *)malloc(ft_strlen((char *)str1) + ft_strlen((char *)str2) * sizeof(char));
    if(!hello)
        return(NULL);
    while(str1[i] != '\0')
    {
        hello[i] = str1[i];
        i++; 
    }
    while (str2[j] != '\0')
    {
        hello[i] = str2[j];
        i++;
        j++;
    }
    hello[i] = '\0';
    return(hello);
}