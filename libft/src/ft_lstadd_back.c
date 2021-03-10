/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:18:52 by tkomaris          #+#    #+#             */
/*   Updated: 2021/01/19 19:59:34 by tkomaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elmnt;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_elmnt = ft_lstlast(*lst);
	last_elmnt->next = new;
}