/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:41:23 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/17 11:20:14 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H

# define LIBFT_H 

# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
char	*ft_strrchr(const char *str, int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, int n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char *ft_strnstr(const char *s1, const char *s2, size_t n);
char *ft_strjoin(const char* s1, const char* s2);

#endif
