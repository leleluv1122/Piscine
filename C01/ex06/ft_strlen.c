/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 22:22:42 by seupark           #+#    #+#             */
/*   Updated: 2020/10/21 13:18:11 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		size;
	char	*s;

	s = str;
	size = 0;
	while (1)
	{
		if (*s == '\0')
			break ;
		size++;
		s++;
	}
	return (size);
}
