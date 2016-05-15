/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud <schabaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 03:07:57 by schabaud          #+#    #+#             */
/*   Updated: 2016/05/13 12:28:45 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;

	if (size == 0)
		return (NULL);
	if ((s = malloc(size + 1)) == NULL)
		return (NULL);
	while (size)
		s[size--] = '\0';
	*s = '\0';
	return (s);
}
