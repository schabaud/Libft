/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud </var/mail/schabaud>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 03:04:51 by schabaud          #+#    #+#             */
/*   Updated: 2016/02/26 03:05:02 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*o;
	size_t	i;

	i = 0;
	if ((o = malloc(1 + ft_strlen((char *)s))) == NULL)
		return (NULL);
	while (s[i])
	{
		o[i] = f(i, s[i]);
		i++;
	}
	o[i] = '\0';
	return (o);
}
