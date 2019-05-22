/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:35:04 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/22 16:06:38 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char		*ft_strchr(const char *s1, int s2)
{
	int i;

	i = 0;
	if (s1 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		if (s1[i] == (char)s2)
		{
			return ((char *)&s1[i]);
		}
		i++;
	}
	if (s1[i] == (char)s2)
	{
		return ((char *)&s1[i]);
	}
	return (NULL);
}
