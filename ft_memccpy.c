/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:00:55 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/31 15:55:24 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*udst;
	unsigned char	*usrc;
	size_t			i;

	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	while (i < n)
	{
		udst[i] = usrc[i];
		if (usrc[i] == (unsigned char)c)
		{
			return ((void *)src + i + 1);
		}
		i++;
	}
	return (0);
}
