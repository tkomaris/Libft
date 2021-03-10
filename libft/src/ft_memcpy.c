/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:24:37 by tkomaris          #+#    #+#             */
/*   Updated: 2021/01/19 19:56:44 by tkomaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*clone_of_dst;
	const char	*clone_of_src;

	if (src == dst || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	clone_of_dst = (char *)dst;
	clone_of_src = (const char *)src;
	while (n--)
		clone_of_dst[n] = clone_of_src[n];
	return (dst);
}