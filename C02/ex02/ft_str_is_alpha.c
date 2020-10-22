/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:01:02 by seupark           #+#    #+#             */
/*   Updated: 2020/10/22 16:31:51 by seupark          ###   ########.fr       */
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

int		ft_str_is_alpha(char *str)
{
	int		empty;
	int		alpha;
	char	*c;

	c = str;
	alpha = 0;
	empty = empty_func(c);
	if (empty == 1)
		alpha = 1;
	while (*c != '\0')
	{
		if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
		{
			alpha = 1;
			break ;
		}
		c++;
	}
	return (alpha);
}
