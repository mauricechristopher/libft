/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:10:33 by mchristo          #+#    #+#             */
/*   Updated: 2018/03/05 23:13:00 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *m;

	if (len == 0)
		return (b);
	m = (unsigned char *)b;
	while (len--)
	{
		*m = (unsigned char)c;
		if (len)
			m++;
	}
	return (b);
}
