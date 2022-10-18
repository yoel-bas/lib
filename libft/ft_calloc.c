/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:59:17 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/13 20:59:19 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_calloc(size_t nitems, size_t size)
{
    void *ptr;
    ptr = malloc(nitems * size);
    if(!ptr)
        return(NULL);
    ft_bzero(ptr, nitems * size);
    return(ptr);
}