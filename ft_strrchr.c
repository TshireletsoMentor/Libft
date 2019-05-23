/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:06:55 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/23 11:16:44 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strrchr(const char *s1, int n)
{
	int i;

	i = 0;
	if (s1 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		if (s1[i] == (char)n)
		{
			return ((char *)s1 + i);
		}
		i--;
	}
	return (NULL);
}
