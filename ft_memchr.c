/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 03:42:55 by mchristo          #+#    #+#             */
/*   Updated: 2018/03/05 22:30:39 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	dst;

	dst = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (str[i] == dst)
			return (str + i);
		i++;
	}
	return (NULL);
}
