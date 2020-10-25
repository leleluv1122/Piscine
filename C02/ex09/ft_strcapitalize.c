/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:36:29 by seupark           #+#    #+#             */
/*   Updated: 2020/10/25 15:14:59 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		check(char *c)
{
	int		rst;

	rst = 0;
	if (*c >= 'a' && *c <= 'z')
		rst = 1;
	if (*c >= 'A' && *c <= 'Z')
		rst = 1;
	if (*c >= '0' && *c <= '9')
		rst = 1;
	return (rst);
}

char	*ft_strcapitalize(char *str)
{
	char	*c;
	int		idx;

	c = str;
	idx = 0;
	while (*c)
	{
		if (idx == 0)
		{
			if (*c >= 'a' && *c <= 'z')
			{
				*c -= 32;
				idx++;
			}
			else if (*c >= '0' && *c <= '9')
				idx++;
		}
		else if (!check(c))
			idx = 0;
		else
			idx++;
		c++;
	}
	return (str);
}
