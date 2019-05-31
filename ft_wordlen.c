/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 06:28:36 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/31 10:03:41 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

size_t		ft_wordlen(const char *str, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c && str[i] != '\0')
		{
			i++;
		}
		while (str[i] != c && str[i] != '\0')
		{
			j++;
			i++;
		}
	}
	return ((int)i);
}
