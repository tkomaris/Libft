/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:26:17 by tkomaris          #+#    #+#             */
/*   Updated: 2021/01/19 19:56:48 by tkomaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*clone_of_dst;
	char	*clone_of_src;

	clone_of_dst = (char *)dst;
	clone_of_src = (char *)src;
	if (len == 0 || dst == src)
		return (dst);
	if (clone_of_src < clone_of_dst)
	{
		while (len--)
			*(clone_of_dst + len) = *(clone_of_src + len);
		return (dst);
	}
	while (len--)
		*clone_of_dst++ = *clone_of_src++;
	return (dst);
}