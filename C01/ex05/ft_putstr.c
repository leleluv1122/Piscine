/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 21:59:51 by seupark           #+#    #+#             */
/*   Updated: 2020/10/21 13:14:02 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		idx;
	char	*s;

	idx = 0;
	s = str;
	while (1)
	{
		if (*s == '\0')
			break ;
		idx++;
		s++;
	}
	write(1, str, idx);
}