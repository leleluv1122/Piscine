/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 22:19:47 by seupark           #+#    #+#             */
/*   Updated: 2020/10/22 22:25:01 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		empty_func(char *str)
{
	char	*c;
	int		ret;
	int		size;

	c = str;
	size = 0;
	while (*c)
	{
		size++;
		c++;
	}
	if (size == 0)
		ret = 1;
	else
		ret = 0;
	return (ret);
}

int		ft_str_is_printable(char *str)
{
	int		empty;
	int		is_right;
	char	*c;

	c = str;
	is_right = 1;
	empty = empty_func(c);
	if (empty == 1)
		is_right = 1;
	while (*c != '\0')
	{
		if ((*c >= 0 && *c <= 31) || *c == 127)
		{
			is_right = 0;
			break ;
		}
		c++;
	}
	return (is_right);
}
