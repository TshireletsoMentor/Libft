/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:04:30 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/28 09:49:45 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	unsigned char *ub;

	ub = (unsigned char *)b;
	if (len == 0)
	{
		return (0);
	}
	while (len > 0)

	{
		*ub = (unsigned char)c;
		ub++;
		len--;
	}
	return (b);
}
