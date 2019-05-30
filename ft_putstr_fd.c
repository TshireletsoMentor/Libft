/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 10:42:47 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/30 10:48:43 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	int i;
	
	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			write(fd, &str[i], 1);
			i++;
		}
	}
}