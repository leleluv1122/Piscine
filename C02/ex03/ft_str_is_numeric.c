/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:42:28 by seupark           #+#    #+#             */
/*   Updated: 2020/10/22 16:42:56 by seupark          ###   ########.fr       */
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

int		ft_str_is_numeric(char *str)
{
	int		empty;
	int		num;
	char	*c;

	c = str;
	num = 1;
	empty = empty_func(c);
	if (empty == 1)
		num = 1;
	while (*c != '\0')
	{
		if (*c < '0' || *c > '9')
		{
			num = 0;
			break ;
		}
		c++;
	}
	return (num);
}
