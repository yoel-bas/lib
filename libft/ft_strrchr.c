/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:28:17 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/13 12:24:25 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*first;

	i = 0;
	first = str;
	while (str[i])
		i++;
	while (str[i] != *first && str[i] != c)
		i--;
	if (str[i] == c)
		return ((char *)str + i);
	return (0);
}
