/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkomaris <tkomaris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 12:27:34 by tkomaris          #+#    #+#             */
/*   Updated: 2021/01/19 19:57:28 by tkomaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int			i;
	int			slen;
	char		*str;

	i = 0;
	slen = ft_strlen(s);
	str = NULL;
	if (s && f)
	{
		str = malloc(sizeof(char) * (slen + 1));
		if (!str)
			return (NULL);
		while (i < slen)
		{
			str[i] = f(i, s[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}