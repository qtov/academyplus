/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pforgaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/20 19:30:04 by pforgaci          #+#    #+#             */
/*   Updated: 2016/01/29 14:47:35 by pforgaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <bsd/string.h>

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	//printf("%d\n", ft_strlen(av[1]));
	//printf("%d\n", strlen(av[1]));
	/*write(1, av[1], ft_strlen(av[1]));
	write(1, "\n", 1);
	write(1, (char *)memchr(av[1], av[2][0], ft_strlen(av[1])), 4);
	write(1, "\n", 1);
	write(1, av[1], ft_strlen(av[1]) + 3);
	write(1, "\n", 1);*/
	//write(1, av[2], 8);
	//write(1, "\n", 1);
	//memcpy(av[2], '$', 3);
	//write(1, av[2], 8);
	//write(1, "\n", 1);
	/*write(1, strncmp(av[1], "qwe", 6), 6);
	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, ft_strncmp(av[1], "qwe", 6), 6);
	write(1, "\n", 1);
	*/
	printf("%d\n", strncmp(av[1], av[2], 6));
	printf("%d\n", ft_strncmp(av[1], av[2], 6));

	return (0);
}
