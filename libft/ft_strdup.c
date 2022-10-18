/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:04:11 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/16 22:04:12 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
char *ft_strdup(const char *s)
{
    int i;
    i = 0;
    char *str;
    char *ptr;
    str = (char *)s;
    ptr =(char *)malloc(sizeof(char));
    if(!ptr)
        return(NULL);
    while (str[i] != '\0')
    {
        ptr[i] = str[i];
        i++;
    }

    return(ptr);
    
}