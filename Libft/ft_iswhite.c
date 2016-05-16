/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud <schabaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 02:03:11 by schabaud          #+#    #+#             */
/*   Updated: 2016/05/13 12:08:57 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhite(char c)
{
	return ((c == '\v' || c == '\r' || c == ' ' || c == '\f'
				|| c == '\t' || c == '\n') ? 1 : 0);
}
