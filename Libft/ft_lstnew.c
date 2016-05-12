/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud </var/mail/schabaud>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 02:48:21 by schabaud          #+#    #+#             */
/*   Updated: 2016/02/26 02:48:37 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	const *content, size_t content_size)
{
	t_list	*node;

	if ((node = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	node->content = (content == NULL) ? NULL :
		ft_memcpy(ft_memalloc(content_size), content, content_size);
	node->content_size = (content == NULL) ? 0 : content_size;
	node->next = NULL;
	return (node);
}
