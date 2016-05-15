/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud <schabaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 01:57:36 by schabaud          #+#    #+#             */
/*   Updated: 2016/05/13 12:24:57 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int		blbl;
	long	number;

	blbl = 1;
	number = 0;
	while (ft_iswhite(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		blbl = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		number = 10 * number + (*(str++) - '0');
	return ((int)(blbl * number));
}
