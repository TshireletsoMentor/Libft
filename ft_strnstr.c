/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:07:51 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/22 14:02:42 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
	{
		return ((char *)s2);
	}
	while (s1[i] != '\0' && i < (int)n)
	{
		while (s1[i + j] == s2[j] && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == '\0')
		{
			return ((char *)s1 + i);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
