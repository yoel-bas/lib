/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:09:16 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/13 12:08:11 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int y)
{
	if (y >= 97 && y <= 122)
		y -= 32;
	return (y);
}
