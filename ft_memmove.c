/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:11:36 by mchristo          #+#    #+#             */
/*   Updated: 2018/03/05 04:40:02 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*source;
	char	*dest;
	size_t	i;

	i = 0;
	source = (char *)src;
	dest = (char *)dst;
	if (source < dest)
		while (n--)
			*(dest + n) = *(source + n);
	else
		while (i < n)
		{
			*(dest + i) = *(source + i);
			i++;
		}
	return (dst);
}
