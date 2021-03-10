/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:50:42 by tkomaris          #+#    #+#             */
/*   Updated: 2021/01/19 19:59:23 by tkomaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clone_of_lst;
	t_list	*step;

	clone_of_lst = *lst;
	while (clone_of_lst)
	{
		step = clone_of_lst->next;
		ft_lstdelone(clone_of_lst, del);
		clone_of_lst = step;
	}
	*lst = NULL;
}