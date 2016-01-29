/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforgaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/29 14:47:12 by pforgaci          #+#    #+#             */
/*   Updated: 2016/01/29 14:48:15 by pforgaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;

	dup = NULL;
	i = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	while (s1[i])
	{
		dup[i] = s1[i];
		++i;
	}
	dup[i] = '\0';
	return (dup);
}
