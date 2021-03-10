/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 17:05:41 by tkomaris          #+#    #+#             */
/*   Updated: 2021/02/07 16:20:23 by tkomaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	total;

	total = count * size;
	if (!(str = malloc(total)))
		return (NULL);
	if (str)
		ft_memset(str, 0, total);
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
// this is
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
// the question
	if (!(ptr = (char *)malloc(count * size)))
		return (NULL);
	if (ptr)
		ft_bzero(ptr, count * size);
	return (ptr);
}
