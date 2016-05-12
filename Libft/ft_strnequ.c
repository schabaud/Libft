/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud </var/mail/schabaud>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 03:07:33 by schabaud          #+#    #+#             */
/*   Updated: 2016/02/26 03:07:41 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	return ((ft_strncmp(s1, s2, n) == 0) ? 1 : 0);
}
