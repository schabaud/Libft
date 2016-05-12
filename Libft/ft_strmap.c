/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud </var/mail/schabaud>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 03:04:25 by schabaud          #+#    #+#             */
/*   Updated: 2016/02/26 03:05:06 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*o;
	size_t	i;

	i = 0;
	if ((o = malloc(1 + ft_strlen((char *)s))) == NULL)
		return (NULL);
	while (s[i])
	{
		o[i] = f(s[i]);
		i++;
	}
	o[i] = '\0';
	return (o);
}
