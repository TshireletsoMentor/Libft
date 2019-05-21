/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:44:00 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/21 13:46:33 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isdigit(unsigned char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
