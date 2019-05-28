/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:51:36 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/28 15:54:10 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*udst;
	unsigned char	*usrc;

	i = -1;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	if (usrc > udst)
	{
		while (len > 0)
		{
			udst[len] = usrc[len];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			udst[i] = usrc[i];
			i++;
		}
	}
	return (udst);
}
