/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:03:55 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/13 12:34:09 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	char		*srcc;

	dest = (char *)dst;
	srcc = (char *)src;
	i = 0;
	if (!dest && !srcc)
		return (NULL);
	if (dest > srcc)
	{
		while (len-- > 0)
		{
			dest[len] = srcc[len];
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = srcc[i];
			i++;
		}
	}
	return (dst);
}
