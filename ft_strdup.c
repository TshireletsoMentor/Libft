/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:32:22 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/30 09:57:57 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char	*ft_strdup(const char *src)
{
	int 	i;
	char *dst;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (!(dst = (char *)malloc(sizeof(char) * (1 + i))))
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
