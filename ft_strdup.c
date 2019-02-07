/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:15:45 by mchristo          #+#    #+#             */
/*   Updated: 2018/03/05 22:01:27 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	n;
	size_t	i;
	char	*s;

	n = ft_strlen(str);
	i = 0;
	if (!(s = (char *)malloc((1 + n) * sizeof(char))))
		return (NULL);
	else
		while (i < n)
		{
			s[i] = str[i];
			i++;
		}
	s[i] = '\0';
	return (s);
}
