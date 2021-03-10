/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:26:08 by tkomaris          #+#    #+#             */
/*   Updated: 2021/01/19 19:56:41 by tkomaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*clone_of_s1;
	const unsigned char	*clone_of_s2;
	size_t				i;

	i = 0;
	clone_of_s1 = (const unsigned char *)s1;
	clone_of_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (clone_of_s1[i] != clone_of_s2[i])
			return (clone_of_s1[i] - clone_of_s2[i]);
		i++;
	}
	return (0);
}