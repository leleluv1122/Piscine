/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 17:21:22 by seupark           #+#    #+#             */
/*   Updated: 2020/10/22 17:43:19 by seupark          ###   ########.fr       */
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

int		ft_str_is_lowercase(char *str)
{
	int		empty;
	int		is_low;
	char	*c;

	c = str;
	is_low = 1;
	empty = empty_func(c);
	if (empty == 1)
		is_low = 1;
	while (*c != '\0')
	{
		if (*c < 'a' || *c > 'z')
		{
			is_low = 0;
			break ;
		}
		c++;
	}
	return (is_low);
}
