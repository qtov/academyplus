/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforgaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 14:47:25 by pforgaci          #+#    #+#             */
/*   Updated: 2016/01/29 16:45:33 by pforgaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			j;
	size_t			k;
	unsigned char	found;

	i = 0;
	if (!s2)
		return ((char *)s1);
	while (i++ < n && s1[i])
		if (s1[i] == s2[0])
		{
			j = i;
			k = 0;
			found = 1;
			while (s2[k] && s1[j] && i + j < n)
				if (s1[j++] != s2[k++])
				{
					found = 0;
					break ;
				}
			if (found == 1 && i + j <= n)
				return ((char *)(s1 + i));
		}
	return (NULL);
}
