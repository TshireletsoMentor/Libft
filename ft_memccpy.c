/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:00:55 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/28 15:49:47 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

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
			return (&udst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
