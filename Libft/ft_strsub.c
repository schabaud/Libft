/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud <schabaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 03:11:06 by schabaud          #+#    #+#             */
/*   Updated: 2016/05/16 15:56:43 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cpy;

	if (!(s == NULL))
	{
		i = ft_strlen((char*)s);
		if (!(cpy = (char *)malloc(sizeof(char) * len + 1)) || !s || start > i)
			return (NULL);
		i = 0;
		while (s[start] && i < len)
			cpy[i++] = s[start++];
		cpy[i] = '\0';
		return (cpy);
	}
	return (0);
}
