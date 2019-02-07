/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 02:30:50 by mchristo          #+#    #+#             */
/*   Updated: 2018/03/12 03:25:14 by mchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*ft;

	ft = (t_list *)malloc(sizeof(t_list));
	if (!ft)
		return (NULL);
	ft->next = NULL;
	if (!content)
	{
		ft->content = NULL;
		ft->content_size = 0;
		return (ft);
	}
	ft->content = malloc(content_size);
	ft_memcpy(ft->content, content, content_size);
	ft->content_size = content_size;
	return (ft);
}
