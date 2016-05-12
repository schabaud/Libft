/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud </var/mail/schabaud>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 03:02:39 by schabaud          #+#    #+#             */
/*   Updated: 2016/02/26 03:02:55 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*o;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((o = (char *)malloc(ft_strlen((char *)s1 + ft_strlen((char *)s2))
					+ 1)) == NULL)
		return (NULL);
	while (s1[i])
	{
		o[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		o[i + j] = s2[j];
		j++;
	}
	o[i + j] = '\0';
	return (o);
}
