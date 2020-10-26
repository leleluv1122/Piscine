/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:45:00 by seupark           #+#    #+#             */
/*   Updated: 2020/10/22 17:48:23 by seupark          ###   ########.fr       */
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

int		ft_str_is_uppercase(char *str)
{
	int		empty;
	int		is_high;
	char	*c;

	c = str;
	is_high = 1;
	empty = empty_func(c);
	if (empty == 1)
		is_high = 1;
	while (*c != '\0')
	{
		if (*c < 'A' || *c > 'Z')
		{
			is_high = 0;
			break ;
		}
		c++;
	}
	return (is_high);
}
