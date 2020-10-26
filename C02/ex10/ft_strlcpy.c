/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seupark <seupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 10:55:25 by seupark           #+#    #+#             */
/*   Updated: 2020/10/26 11:03:18 by seupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*c;
	int		idx;

	c = src;
	idx = 0;
	size--;
	while (size--)
	{
		dest[idx] = *c;
		c++;
		idx++;
	}
	dest[idx] = '\0';
	return (idx + 1);
}
