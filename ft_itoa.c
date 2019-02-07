/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:37:48 by mchristo          #+#    #+#             */
/*   Updated: 2018/02/20 16:37:49 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

static	int	ft_check(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*res;
	int		neg;

	neg = is_neg(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (neg)
		n = -n;
	len = neg + ft_iterdig(n);
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	while (len--)
	{
		res[len] = ft_check(n % 10) + '0';
		n /= 10;
	}
	if (neg)
		res[0] = '-';
	return (res);
}
