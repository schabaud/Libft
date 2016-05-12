/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schabaud </var/mail/schabaud>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 02:47:41 by schabaud          #+#    #+#             */
/*   Updated: 2016/02/26 02:48:03 by schabaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*root;
	t_list	*node;

	if (lst == NULL)
		return (NULL);
	if ((root = f(lst)) == NULL)
		return (NULL);
	node = root;
	while (lst->next)
	{
		lst = lst->next;
		if ((node->next = f(lst)) == NULL)
			return (NULL);
		node = node->next;
	}
	node->next = NULL;
	return (root);
}
