/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:04:48 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/31 15:35:51 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

static int	ft_len(long n)
{
	long	x;
	size_t	i;

	x = n;
	i = 0;
	if (x < 0)
	{
		x *= -1;
		i++;
	}
	while (x > 0)
	{
		x /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	long	z;
	size_t	i;

	z = n;
	i = ft_len(z);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (z == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (z < 0)
	{
		str[0] = '-';
		z *= -1;
	}
	while (z > 0)
	{
		str[i--] = (z % 10) + 48;
		z /= 10;
	}
	return (str);
}
