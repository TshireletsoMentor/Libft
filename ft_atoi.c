/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmentor <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:11:35 by tmentor           #+#    #+#             */
/*   Updated: 2019/05/30 10:23:50 by tmentor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_atoi(const char *str)
{
	int i;
	int nbr;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' ||
					str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}
