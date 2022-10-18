/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:34:59 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/17 20:35:01 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *str, unsigned int s, size_t len)
{
    size_t i;
    char *s1;
    size_t slen;

    i = 0;
    slen = ft_strlen(str);
    if (s >= slen)
        return(NULL);
    if(len == 0)
        return(NULL);
    s1 = malloc(len + 1);
    if(!s1 || !str )
        return(NULL);
    while(s<= len )
    {
        s1[i] = str[s];
        i++;
        s++; 
    }
    s1[i] = '\0';
    return(s1);
}