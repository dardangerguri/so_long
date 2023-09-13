/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerguri <dgerguri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:11:50 by dgerguri          #+#    #+#             */
/*   Updated: 2023/06/18 19:01:19 by dgerguri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	c;

	i = 0;
	if (s != '\0')
	{
		while (s[i] != '\0')
		{
			c = s[i];
			write(fd, &c, 1);
			i++;
		}
		c = '\n';
		write(fd, &c, 1);
	}
}
