/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 21:29:38 by tkomaris          #+#    #+#             */
/*   Updated: 2021/01/19 19:56:51 by tkomaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*clone_of_b;
	size_t			i;

	clone_of_b = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		clone_of_b[i] = c;
		i++;
	}
	return (b = clone_of_b);
}