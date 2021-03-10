/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:05:14 by tkomaris          #+#    #+#             */
/*   Updated: 2021/01/19 19:56:35 by tkomaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*clone_of_dst;
	const unsigned char	*clone_of_src;

	i = 0;
	clone_of_dst = (unsigned char *)dst;
	clone_of_src = (const unsigned char *)src;
	if (!clone_of_dst && !clone_of_src)
		return (NULL);
	while (i < n)
	{
		clone_of_dst[i] = clone_of_src[i];
		if (clone_of_src[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}